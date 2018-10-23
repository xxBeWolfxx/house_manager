#ifndef TIMER_H
#define TIMER_H
#include <QString>
#include <QFile>
#include <QTextStream>

class Timer
{
public:
    Timer();

    QString hours;
    QString minutes;
    QString duration;
    QString path;
    QString name_timer;
    int ordinals_object;

    void SavingTimers(Timer *timer);
    void LoadingTimers(Timer *timer);
};

#endif // TIMER_H
