#ifndef ARDUINO_H
#define ARDUINO_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>


class Arduino
{
public:
    Arduino();
    QString pin_state;
    QString number_pin;
    QString path;

    void SavingData();
    void LoadingData();
    void SendingData();
    void ReceiveData();

    int number_object;
    static int total_number_pin;
public slots:


};

#endif // ARDUINO_H
