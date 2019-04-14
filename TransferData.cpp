#include "TransferData.h"


TransferData::TransferData()
{

}

void TransferData::ReceiveData(TransferData *object)
{
    this->path=object->path;
    this->total_number_pin=object->total_number_pin;
    this->value=object->value;
    this->com_port=object->com_port;
    this->arduino_id=object->arduino_id;

}
void TransferData::TranscriptValue()
{
    QStringList lista_values = value.split(';',QString::SkipEmptyParts);
    temp1= lista_values [0].toInt();

}
