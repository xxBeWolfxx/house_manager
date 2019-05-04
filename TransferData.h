#ifndef TRANSFERDATA_H
#define TRANSFERDATA_H

#include "Arduino.h"
#include <QString>
#include <QStringList>


class TransferData : public Arduino
{
public:
    QString value="46;68";
    int *tab_value[6];
    QString arduino_name;

    TransferData();

    void TranscriptValue();
    void TranscriptObject(Arduino *object);
    void SaveObject(Arduino *object);

public slots:
    void ReceiveData(TransferData *object);



};

#endif // TRANSFERDATA_H
