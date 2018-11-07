#include "Timer.h"

Timer::Timer(QString name, int ordinals_object)
{
    this->name_timer=name;
    this->ordinals_object=ordinals_object;
}

Timer::Timer()
{

}


void Timer::SavingTimers()
{
    path = QCoreApplication::applicationDirPath();
    path = path + "/Timer/" + QString::number(ordinals_object)+"/"+ name_timer + ".txt";
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
    path = QCoreApplication::applicationDirPath();
    path = path + "/Timer/" + QString::number(ordinals_object)+"/"+ name_timer + ".txt";
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    hours = in.readLine(10);
    minutes = in.readLine(10);
    duration = in.readLine(10);

    file.close();


}
