#ifndef TRANSFERDATA_H
#define TRANSFERDATA_H

#include "Arduino.h"
#include <QString>
#include <QStringList>


class TransferData : public Arduino
{
public:
    QString value="0";
    int *tab_value[6];
    QString arduino_name;
    QStringList lista_values;
    int statusObject;
    //**************123 every object is working*************//

    TransferData();

    void TranscriptValue();
    void TranscriptObject(Arduino *object);
    void SaveObject(Arduino *object);

public slots:
    void ReceiveData(TransferData *object);



};

#endif // TRANSFERDATA_H
