#ifndef TIMER_H
#define TIMER_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDateTime>

class Timer
{
public:
    Timer(QString name,int ordinals_object);
    Timer();

    int hours=-1;
    int minutes=-1;
    int duration=-1;
    QString status;

    QString path;
    QString name_timer;
    int ordinals_object;
    bool set_on_off=false;

    void SavingTimers();
    void LoadingTimers();
    int CalculationsPeriod();
};

#endif // TIMER_H
