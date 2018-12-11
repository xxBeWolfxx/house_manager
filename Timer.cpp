#include "Timer.h"

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
    status = in.readLine(10).toInt();

    file.close();


}
