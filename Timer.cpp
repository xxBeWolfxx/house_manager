#include "Timer.h"
#include <QTime>
#include <cmath>


Timer::Timer(QString name, int ordinals_object)
{
    this->name_timer=name;
    this->ordinals_object=ordinals_object;
    path = QCoreApplication::applicationDirPath();
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
    in<<status<<endl;

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
    status = in.readLine(10);

    file.close();


}

int Timer::CalculationsPeriod()
{
    int h_minutes,h_hours, set_time;
    h_hours=QTime::currentTime().hour()*3600*1000;
    h_minutes=QTime::currentTime().minute()*60*1000;
    set_time= abs(hours*3600*1000+minutes*60*1000-h_hours-h_minutes);


    return set_time;



}
