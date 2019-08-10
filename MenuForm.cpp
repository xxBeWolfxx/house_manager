#include "MenuForm.h"
#include "ui_MenuForm.h"
#include <QFile>
#include <QApplication>
#include <QDebug>


MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);
    ui->progressBar->hide();

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);  //to set tabs unable for customer and start first tab
    ui->tabWidget->setTabEnabled(2,false);

    SetTimerList(); // creating list of timers

    //******************************creating the variables*************************
    object=new Arduino;
    counter =new QTimer(this);
    window = new MainWindow(this);
    transfer = new TransferData;

    ui->minutes_dur->setRange(0,120); //to set range duration of timer
    ui->minutes_dur->setSingleStep(5);





}

MenuForm::~MenuForm()
{
    delete object;
    delete window;
    delete ui;
}


void MenuForm::SetTimerList() //to create list of timers in QWidgetList
{
    for(int i=1;i<4;i++)
    ui->timerlist->addItem("Timer "+QString::number(i));

}

void MenuForm::on_Button_save_quit_clicked() //function which saves information and close window
{
    if(tab_status==1)
    timer->SavingTimers();

    transfer->close_window=true;
    transfer->TranscriptObject(object);
    emit Sending_Data(transfer);

    MenuForm::close();



}

void MenuForm::on_timerlist_itemClicked(QListWidgetItem *item) //choosing item form the QLW
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
    object->pin_state='1';
}

void MenuForm::on_Button_off_clicked()
{
    object->pin_state='0';
}

void MenuForm::on_Timer_on_clicked() //swithing on timers
{
    timer->name_timer=timer->name_timer.remove(0,6); //get ordinal number of timer

    //checking status of timers
    if(timer->status == true)
    {
    QTimer::singleShot(timer->CalculationsPeriod()-300,this,SLOT(counterout())); //set timers on
    timer->status=false;
    qDebug()<<"okay";
    }
    else if (timer->status == false)
    QMessageBox::information(this, "UWAGA!","Timer jest załączony!");

}

void MenuForm::on_Timer_off_clicked()
{
    if (timer->status==false) //switch off the timer
    {
    timer->status=true;
    QMessageBox::information(this, "Informacje", "Timer został wyłączony");
    }

}

void MenuForm::on_Button_set_clicked() //set timer:set hours and minutes to proper values
{
    timer->hours=ui->timer_3->time().hour();
    timer->minutes=ui->timer_3->time().minute();
    timer->duration=ui->minutes_dur->value();

    timer->SavingTimers();
    seting_ui_timer(timer);

}

void MenuForm::seting_ui_timer(Timer *timer)
{
    //*****************temporary variables helps to set properly the timer***************************
    QString set_time;
    QString h_minutes;
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

void MenuForm::counterout()//after the timer, switch on the pins
{
    if (timer->status==false)
    {
    object->pin_state="1";
    transfer->TranscriptObject(object);
    emit Sending_Data(transfer);
    QTimer::singleShot(timer->duration*60*1000,this,SLOT(stop_timer()));
    QMessageBox::information(this,"","działa");
    }
}

void MenuForm::stop_timer()
{
    object->pin_state="0";

    transfer->TranscriptObject(object);
    emit Sending_Data(transfer);
    timer->status=true;
    QMessageBox::information(this,"","koniec");

}


void MenuForm::CatchBufor(TransferData *bufor)//to catch information between windows
{

    object->pin_state=bufor->pin_state;
    object->number_pin=bufor->number_pin;
    object->number_object=bufor->number_object;
    transfer->close_window=bufor->close_window;

    ui->name_object->setText(bufor->arduino_name);
    ui->pinout->setText(bufor->number_pin);

}
void MenuForm::DestroyingVariables()
{
    delete timer;

}
