#include "TransferData.h"
#include <QDebug>


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
    if(value != "" && value.size()<3)
    {
    lista_values = value.split(";");
    QString variable = lista_values.at(0).toLocal8Bit().constData();
    temp1 = variable.toInt();
    variable = lista_values.at(1).toLocal8Bit().constData();
    foto1 = variable.toInt();
    }
    else
    {
        temp1=-10;
        foto1 =0;

    }



}

void TransferData::TranscriptObject(Arduino *object)
{
    this->pin_state=object->pin_state;
    this->number_pin=object->number_pin;
    this->number_object=object->number_object;

}

void TransferData::SaveObject(Arduino *object)
{
    object->pin_state=this->pin_state;
    object->number_pin=this->number_pin;
    object->number_object=this->number_object;
}


