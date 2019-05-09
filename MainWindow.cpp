#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QDebug>
#include <string.h>
#include <QTextCodec>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    total_path=QCoreApplication::applicationDirPath();
    ui->setupUi(this);

    //creating variables
    arduino_is_available = false;
    arduino_port_name = "";
    controller = new QSerialPort;
    transfer = new TransferData;

    //ui settings
    ui->Button_chandelier->setDisabled(true);
    ui->Button_light_door->setDisabled(true);
    ui->Button_light_shed->setDisabled(true);


    light_shed.LoadingData();
    chandelier.LoadingData();
    light_door.LoadingData();
    Checkingbox();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Checkingbox()
{
    ui->Box_chandelier->setChecked(CheckBoxMarking(chandelier));
    ui->Box_light_door->setChecked(CheckBoxMarking(light_door));
    ui->Box_light_shed->setChecked(CheckBoxMarking(light_shed));
    ui->Box_chandelier->setDisabled(true); //to set disabling
    ui->Box_light_door->setDisabled(true);
    ui->Box_light_shed->setDisabled(true);
    ui->box_arduino->setDisabled(true);

}

bool MainWindow::CheckBoxMarking(Arduino object)
{
    if(object.pin_state=="1")
    {
        return true;
    }
    else
    {
        return false;
    }
}
void MainWindow::SavingBufor(Arduino object, QString name, TransferData *transfer)
{
    transfer->number_object=object.number_object;
    transfer->number_pin=object.number_pin;
    transfer->pin_state=object.pin_state;
    transfer->arduino_name=name;

}

void MainWindow::on_Button_light_shed_clicked()
{
    QString name="Light shed";
    SavingBufor(light_shed, name,transfer);
    options = new MenuForm(this);
    connect(options, SIGNAL(Sending_Data(TransferData*)),this,SLOT(Slotbox(TransferData*)));
    connect(this, SIGNAL(BuforTransfer(TransferData*)),options,SLOT(CatchBufor(TransferData *)));


    emit BuforTransfer(transfer);
    window_closing();
    options->show();


}

void MainWindow::on_Button_chandelier_clicked()
{
    QString name="Chandelier";
    SavingBufor(chandelier, name,transfer);
    options=new MenuForm(this);
    connect(options, SIGNAL(Sending_Data(TransferData*)),this,SLOT(Slotbox(TransferData*)));
    connect(this, SIGNAL(BuforTransfer(TransferData*)),options,SLOT(CatchBufor(TransferData *)));

    emit BuforTransfer(transfer);

    window_closing();
    options->show();


}

void MainWindow::on_Button_light_door_clicked()
{
    QString name="Light_door";
    SavingBufor(light_door,name,transfer);
    options=new MenuForm(this);
    connect(options, SIGNAL(Sending_Data(TransferData*)),this,SLOT(Slotbox(TransferData*)));
    connect(this, SIGNAL(BuforTransfer(TransferData*)),options,SLOT(CatchBufor(TransferData *)));


    emit BuforTransfer(transfer);

    window_closing();
    options->show();
}

void MainWindow::Slotbox(TransferData *bufor) //Sending date
{

    Arduino *temp;
    switch (bufor->number_object)
    {
    case 1: //light_shed
    {
        temp=&light_shed;
        bufor->SaveObject(temp);
        break;
    }
    case 2: //chandelier
    {
        temp=&chandelier;
        bufor->SaveObject(temp);
        break;
    }
    case 3: //light_door
    {
       temp=&light_door;
        bufor->SaveObject(temp);
        break;
    }


    }
    Checkingbox();
    ui->centralWidget->show();

    SendingData(bufor);



}

void MainWindow::window_closing()
{
    ui->centralWidget->hide();
}

void MainWindow::on_set_arduino_clicked()
{
    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
        if(serialPortInfo.hasVendorIdentifier())
        {
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
        }
        qDebug() << "Has Product ID: " << serialPortInfo.hasProductIdentifier();
        if(serialPortInfo.hasProductIdentifier())
        {
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }


    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier())
        {
            if(serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id){
                if(serialPortInfo.productIdentifier() == arduino_uno_product_id){
                    arduino_port_name = serialPortInfo.portName();
                    arduino_is_available = true;
                }
            }
        }
    }
    if(arduino_is_available)
    {
        // open and configure the serialport
        controller->setPortName(arduino_port_name);
        controller->open(QSerialPort::ReadWrite);
        controller->setBaudRate(QSerialPort::Baud9600);
        controller->setDataBits(QSerialPort::Data8);
        controller->setParity(QSerialPort::NoParity);
        controller->setStopBits(QSerialPort::OneStop);
        controller->setFlowControl(QSerialPort::NoFlowControl);
    }
    else
    {
        // give error message if not available
        QMessageBox::warning(this, "Uwaga!", "Nie wykryto Arduino!");
        ui->box_arduino->setChecked(false);

        ui->Button_chandelier->setDisabled(false);
        ui->Button_light_door->setDisabled(false);
        ui->Button_light_shed->setDisabled(false);

    }

    if(controller->isWritable())
    {
        ui->Button_chandelier->setDisabled(false);
        ui->Button_light_door->setDisabled(false);
        ui->Button_light_shed->setDisabled(false);
        controller->write("1");
        controller->waitForBytesWritten(-5);
        ui->box_arduino->setChecked(true);
        QMessageBox::information(this,"Uwaga!","Połączenie się powiodło!");


    }



}


void MainWindow::SendingData(Arduino *object)
{
    QString controller_date;
    qDebug()<<object->pin_state;
    controller_date=object->number_pin;
    if(object->pin_state=="0")
        controller_date+="2";
    else
        controller_date+=object->pin_state;

    std::string helper=controller_date.toUtf8().constData();
    QByteArray date=QByteArray::fromStdString(helper);
    //qDebug()<<date; to controll a code
    if(controller->isWritable())
    {
        controller->flush();
        controller->waitForBytesWritten(-5);
        controller->write(date);
        controller->waitForBytesWritten(-5);
        controller->clear();

    }

}



void MainWindow::ReceiveData()
{

    if (controller->isWritable())
    {
        controller->flush();
        controller->waitForBytesWritten(-5);
        controller->write("6");
        controller->waitForBytesWritten(-5);
        controller->clear();

        if(controller->isReadable())
        {
            controller->flush();
            controller->waitForReadyRead(-5);
            dataArduino=controller->readAll();
        }
    }
}

void MainWindow::on_actionOnly_staff_triggered()
{
    if (!status_staff)
    {
        dataArduino="50;25;5;123";
        staff = new Staff();
        staff->show();
        status_staff =! status_staff;
        ReceiveData();
        transfer->value=QString::fromStdString(dataArduino.toStdString()); //convert bytearray to qstring
        transfer->TranscriptValue(); //cut String to parts




        connect(staff, SIGNAL(SendInfo()),this,SLOT(RefreshStaff()));
        connect(this, SIGNAL(BuforTransfer(TransferData *)),staff,SLOT(CatchInfo(TransferData *)));
        emit BuforTransfer(transfer);
    }
    else
    {
        QMessageBox::information(this,"UWAGA!","Okno jest już otwarte!");
    }

}

void MainWindow::RefreshStaff()
{
    status_staff=!status_staff;
}

