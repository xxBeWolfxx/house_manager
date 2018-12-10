#include "MenuForm.h"
#include "ui_MenuForm.h"
#include <QFile>
#include <QApplication>

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    path=QCoreApplication::applicationDirPath();
    ui->setupUi(this);
    ui->progressBar->hide();

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);  //to set tabs unable for customer
    ui->tabWidget->setTabEnabled(2,false);

    SetTimerList(); // creating list of timers

    object=new Arduino;
    counter =new QTimer(this);
    window = new MainWindow(this);
    QString name=ReadingBufor(object);
    ui->name_object->setText(name);

    ui->pinout->setText(object->number_pin);
    ui->minutes_dur->setRange(0,120); //to set range duration of timer
    ui->minutes_dur->setSingleStep(5);





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
    object->number_pin=in.readLine(10);
    object->pin_state=in.readLine(10);
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
    if(tab_status==1)
    timer->SavingTimers();

    object->path=QCoreApplication::applicationDirPath();
    object->path=object->path+"/"+QString::number(object->number_object)+".txt";
    object->SavingData();
    emit Sending_Data();
    MenuForm::close();



}

void MenuForm::on_timerlist_itemClicked(QListWidgetItem *item)
{

    timer = new Timer (item->text(),
                    object->number_object);

    timer->LoadingTimers();


    ui->tabWidget->setTabEnabled(1,true);  //set tabs able for customer
    ui->tabWidget->setTabEnabled(2,true);
    ui->Name->setText(item->text());
    tab_status=1;
    seting_ui_timer(timer);




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
    timer->name_timer=timer->name_timer.remove(0,6); //get ordinal number of timer
    connect(counter, SIGNAL(timeout()),this, SLOT(counterout(Arduino*)));


    QMessageBox::information(this,"",timer->name_timer);

}

void MenuForm::on_Timer_off_clicked()
{
    timer->status="0";
}

void MenuForm::on_Button_set_clicked()
{
    timer->hours=ui->timer_3->time().hour();
    timer->minutes=ui->timer_3->time().minute();
    timer->duration=ui->minutes_dur->value();

    timer->SavingTimers();
    seting_ui_timer(timer);

}

void MenuForm::seting_ui_timer(Timer *timer)
{
    QString set_time;
    QString h_minutes; //variables to help set the proper timer
    QString h_hours;
    if(timer->hours != -1 && timer->minutes!= -1)
    {
        if(timer->hours<=9)
            h_hours="0"+QString::number(timer->hours);
        else
            h_hours=QString::number(timer->hours);
        if(timer->minutes<=9)
            h_minutes="0"+QString::number(timer->minutes);
        else
            h_minutes=QString::number(timer->minutes);

        set_time=h_hours+":"+h_minutes;
        ui->duration->setText(QString::number(timer->duration));
        ui->set_time->setText(set_time);
    }
    else
    {
        ui->duration->setText("00");
        ui->set_time->setText("00:00");
    }

}

void MenuForm::counterout(Arduino *object)
{
    object->SendingData();

}
