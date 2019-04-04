#ifndef TRANSFERDATA_H
#define TRANSFERDATA_H

#include "Arduino.h"
#include <QString>
#include <QStringList>


class TransferData : public Arduino
{
public:
    int arduino_id;
    QString arduino_port_name;
    QString com;
    QString value;
    int *tab_value[6];

    TransferData();

    void TranscriptValue(QString value, Arduino *object);

public slots:
    void ReceiveData(Arduino *object, QString arduino_port_name, int arduino_id, QString com, QString value);



};

#endif // TRANSFERDATA_H
