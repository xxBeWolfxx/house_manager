#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QDebug>
#include <string.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    total_path=QCoreApplication::applicationDirPath();
    ui->setupUi(this);

    arduino_is_available = false;
    arduino_port_name = "";
    controller = new QSerialPort;
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
void MainWindow::SavingBufor(Arduino object, QString name)
{
    QString path=total_path +"/bufor.txt";
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        // qDebug<<"Cant open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    in<<name<<endl;
    in<<object.number_object<<endl;
    in<<object.number_pin<<endl;
    in<<object.pin_state<<endl;
    file.close();

}

void MainWindow::on_Button_light_shed_clicked()
{
    QString name="Light shed";
    SavingBufor(light_shed, name);
    options = new MenuForm(this);
    connect(options, SIGNAL(Sending_Data()),this,SLOT(Slotbox()));


    window_closing();
    options->show();


}

void MainWindow::on_Button_chandelier_clicked()
{
    QString name="Chandelier";
    SavingBufor(chandelier, name);
    options=new MenuForm(this);
    connect(options, SIGNAL(Sending_Data()),this,SLOT(Slotbox()));

    window_closing();
    options->show();


}

void MainWindow::on_Button_light_door_clicked()
{
    QString name="Light_door";
    SavingBufor(light_door,name);
    options=new MenuForm(this);
    connect(options, SIGNAL(Sending_Data()),this,SLOT(Slotbox()));


    window_closing();
    options->show();
}

void MainWindow::Slotbox() //Sending date
{
    chandelier.LoadingData();
    light_shed.LoadingData();
    light_door.LoadingData();
    Checkingbox();
    ui->centralWidget->show();

    Arduino *h_object;
    h_object= new Arduino;
    ReadingBufor(h_object);
    //qDebug()<<h_object->number_pin; to controlle a code
    //qDebug()<<h_object->pin_state;
    SendingData(h_object);



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

void MainWindow::ReadingBufor(Arduino *h_object)
{
    QString name;
    QString path=total_path +"/bufor.txt";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // qDebug<<"Cant open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    name=in.readLine(100);
    h_object->number_object=in.readLine(100).toInt();
    h_object->number_pin=in.readLine(10);
    h_object->pin_state=in.readLine(10);
    file.close();

    /* to controlle a code
    qDebug()<<h_object->number_pin;
    qDebug()<<h_object->pin_state;
    */
}
