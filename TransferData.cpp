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
    lista_values = value.split(';',QString::SkipEmptyParts);
    temp1 = lista_values [0].toInt();
    foto1 = lista_values[1].toInt();
    hum1 = lista_values[2].toInt();
    statusObject = lista_values[3].toInt();



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

int TransferData::MapBar(int x,int y, int z)
{

}
