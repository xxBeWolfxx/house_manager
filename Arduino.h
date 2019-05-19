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
    QString com_port;
    QString arduino_id="1111";

    //variables for inputs
    int temp1;
    int temp2;
    int foto1;
    int foto2;
    int hum1;
    int hum2;


    void SavingData();
    void LoadingData();
    void SendingData();
    void ReceiveData();

    int number_object;
    static int total_number_pin;

public slots:


};

#endif // ARDUINO_H
