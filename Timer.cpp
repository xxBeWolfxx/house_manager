#include "Timer.h"
#include <QTime>
#include <cmath>


Timer::Timer(QString name, int ordinals_object)
{
    this->name_timer=name;
    this->ordinals_object=ordinals_object; //which object was clicked, 1,2 or 3
    path = QCoreApplication::applicationDirPath(); //path rejester of timer
    path = path + "/Timer/" + QString::number(ordinals_object)+"/"+ name_timer + ".txt";
}

Timer::Timer()
{

}


void Timer::SavingTimers()
{
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    in<<hours<<endl;
    in<<minutes<<endl;
    in<<duration<<endl;

    file.close();



}


void Timer::LoadingTimers()
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    hours = in.readLine(10).toInt();
    minutes = in.readLine(10).toInt();
    duration = in.readLine(10).toInt();

    file.close();


}

int Timer::CalculationsPeriod()
{
    int h_minutes,h_hours; //temporary values
    h_hours=QTime::currentTime().hour()*3600*1000;
    h_minutes=QTime::currentTime().minute()*60*1000;


    return abs(hours*3600*1000+minutes*60*1000-h_hours-h_minutes);



}
