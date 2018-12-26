#include "Arduino.h"
#include <QDebug>

int Arduino::total_number_pin;

Arduino::Arduino()
{

    if(total_number_pin != 3)
    {
    total_number_pin++;
    number_object=total_number_pin;
    path=QCoreApplication::applicationDirPath();
    path=path+"/"+QString::number(number_object)+".txt";
    }
}

void Arduino::SavingData()
{

    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
       // qDebug<<"Cant open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    in<<number_pin<<endl;
    in<<pin_state<<endl;
    file.close();



}

void Arduino::LoadingData()
{

    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //qDebug<<"Can't open file";
        file.close();
    }
    QTextStream in(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    number_pin=in.readLine(10);
    pin_state=in.readLine(10);
    file.close();
}

void Arduino::SendingData()
{



}


