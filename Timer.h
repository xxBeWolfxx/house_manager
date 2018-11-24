#ifndef TIMER_H
#define TIMER_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDateTime>
#include <QDebug>

class Timer
{
public:
    Timer(QString name,int ordinals_object);
    Timer();

    QString hours;
    QString minutes;
    QString duration;
    QString status;

    QString path;
    QString name_timer;
    int ordinals_object;

    void SavingTimers();
    void LoadingTimers();
};

#endif // TIMER_H
