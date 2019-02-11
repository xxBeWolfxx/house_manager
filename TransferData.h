#ifndef TRANSFERDATA_H
#define TRANSFERDATA_H

#include "Arduino.h"
#include <QString>


class TransferData : public Arduino
{
public:
    int arduino_id;
    QString arduino_port_name;


    TransferData(Arduino Object_receiver, int arduino_id, QString total_path, QString arduino_port_name);

public slots:
    void ReceiveData();

public signals:
    void SendData();

};

#endif // TRANSFERDATA_H
