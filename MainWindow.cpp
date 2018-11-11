#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    total_path=QCoreApplication::applicationDirPath();
    ui->setupUi(this);


    light_shed.LoadingData();
    chandelier.LoadingData();
    light_door.LoadingData();

    ui->Box_chandelier->setChecked(CheckBoxMarking(chandelier));
    ui->Box_light_door->setChecked(CheckBoxMarking(light_door));
    ui->Box_light_shed->setChecked(CheckBoxMarking(light_shed));
    ui->Box_chandelier->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
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
    options->show();


}

void MainWindow::on_Button_chandelier_clicked()
{
    QString name="Chandelier";
    SavingBufor(chandelier, name);
    options=new MenuForm(this);
    options->show();


}

void MainWindow::on_Button_light_door_clicked()
{
    QString name="Light_door";
    SavingBufor(light_door,name);
    options=new MenuForm(this);
    options->show();
}
