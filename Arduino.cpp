#include "Arduino.h"
#include <QDebug>

int Arduino::total_number_pin;

Arduino::Arduino()
{
    if(total_number_pin != 3)
    {
    total_number_pin++;
    number_object=total_number_pin;
    }
}

void Arduino::SavingData()
{
    path=path+"/"+QString::number(number_object)+".txt";
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
    path=path+"/"+QString::number(number_object)+".txt";
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
