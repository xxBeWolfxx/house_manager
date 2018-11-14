#include "MenuForm.h"
#include "ui_MenuForm.h"
#include <QFile>

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    path=QCoreApplication::applicationDirPath();
    ui->setupUi(this);
    ui->progressBar->hide();

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);  //set tabs unable for customer
    ui->tabWidget->setTabEnabled(2,false);

    SetTimerList();

    object=new Arduino;
    timer=new Timer;
    QString name=ReadingBufor(object);
    ui->name_object->setText(name);
    ui->pinout->setText(object->number_pin);

}

MenuForm::~MenuForm()
{
    delete ui;
}

QString MenuForm::ReadingBufor(Arduino *object)
{
    QString name;
    path=path +"/bufor.txt";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // qDebug<<"Cant open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    name=in.readLine(100);
    object->number_object=in.readLine(100).toInt();
    object->number_pin=in.readLine(1);
    object->pin_state=in.readLine(1);
    file.close();
    return name;

}

void MenuForm::SetTimerList()
{
    for(int i=1;i<4;i++)
    ui->timerlist->addItem("Timer "+QString::number(i));

}

void MenuForm::on_Button_save_quit_clicked()
{
    timer->SavingTimers();
    object->path=QCoreApplication::applicationDirPath();
    object->path=object->path+"/"+QString::number(object->number_object)+".txt";
    object->SavingData();
    MenuForm::hide();

}

void MenuForm::on_timerlist_itemClicked(QListWidgetItem *item)
{
    QString set_time;
    timer = new Timer (item->text(),
                    object->number_object);

    QMessageBox::information(this,"",timer->name_timer);
    timer->LoadingTimers();
    set_time=timer->hours+":"+timer->minutes;


    ui->tabWidget->setTabEnabled(1,true);  //set tabs able for customer
    ui->tabWidget->setTabEnabled(2,true);
    ui->Name->setText(item->text());
    if(timer->hours != "" && timer->minutes!= "")
    {
        ui->duration->setText(timer->duration);
        ui->set_time->setText(set_time);
    }
    else
    {
        ui->duration->setText("00");
        ui->set_time->setText("00:00");
    }


}

void MenuForm::on_Button_on_clicked()
{
    object->pin_state="1";
}

void MenuForm::on_Button_off_clicked()
{
    object->pin_state='0';
}

void MenuForm::on_Timer_on_clicked()
{
    timer->status="1";
}

void MenuForm::on_Timer_off_clicked()
{
    timer->status="0";
}

void MenuForm::on_Button_set_clicked()
{


    timer->SavingTimers();
}
