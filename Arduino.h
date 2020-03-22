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
    QString pin_state; //status of pin; it is on/off
    QString number_pin; //number of pin in arduino
    QString path; // path in files
    QString com_port;
    QString arduino_id="1111"; //id arduino, which is connected

    //variables for inputs
    int temp1;
    int temp2;
    int foto1;
    int foto2;
    int hum1;
    int hum2;

    //methods
    void SavingData();
    void LoadingData();

    int number_object;
    static int total_number_pin;

public slots:


};

#endif // ARDUINO_H
