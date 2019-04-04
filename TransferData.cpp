#include "TransferData.h"


TransferData::TransferData()
{

}

void TransferData::ReceiveData(Arduino *object, QString arduino_port_name, int arduino_id,QString com,QString value)
{
    this->path=object->path;
    this->total_number_pin=object->total_number_pin;
    this->arduino_id=arduino_id;
    this->arduino_port_name=arduino_port_name;
    this->value=value;
    this->com=com;
}
void TransferData::TranscriptValue(QString value, Arduino *object)
{
    QStringList lista_values = value.split(';',QString::SkipEmptyParts);

}
