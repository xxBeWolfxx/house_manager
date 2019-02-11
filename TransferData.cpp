#include "TransferData.h"

TransferData::TransferData(Arduino Object_receiver, int arduino_id, QString total_path, QString arduino_port_name)
{
    this->path=total_path;
    this->pin_state=Object_receiver.pin_state;
    this->total_number_pin=Object_receiver.total_number_pin;
    this->arduino_id=arduino_id;
    this->arduino_port_name=arduino_port_name;

}
