#include "Timer.h"

Timer::Timer()
{

}


void Timer::SavingTimers(Timer *timer)
{
    path = path + "/Timer/" + QString::number(timer->ordinals_object)+"/"+ timer->name_timer + ".txt";
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    in<<timer->hours<<endl;
    in<<timer->minutes<<endl;
    in<<timer->duration<<endl;

    file.close();



}


void Timer::LoadingTimers(Timer *timer)
{
    path = path + "/Timer/" + QString::number(timer->ordinals_object)+"/"+ timer->name_timer + ".txt";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    timer->hours = in.readLine(10);
    timer->minutes = in.readLine(10);
    timer->duration = in.readLine(10);

    file.close();


}
