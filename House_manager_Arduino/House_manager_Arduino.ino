// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       House_manager_Arduino.ino
    Created:	26.12.2018 11:37:21
    Author:     Arkadiusz Kruszyński
*/



// Define Functions below here or use other .ino or cpp files
//
#include <WString.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
//************************\\Define pins\\******************************
#define ONE_WIRE_BUS 9
#define sensor_humidity A0
#define signal_diode 13
#define object_ONE 3
#define object_TWO 4
#define object_THREE 5
//*********************************************************************

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// ***********************\\Empty pins\\*******************************
/*
----------------------------
A1
A2
A3
A4
A5
----------------------------
D6
D7
D8
D10
D11
D12
---------------------------
*/



void setup()
{
	static int on = 0;

	for (int x = 3; x < 14; x++)
	{
		pinMode(x, OUTPUT);
		digitalWrite(x, LOW);
	}		
	Serial.begin(9600);

	while (on == 0)
	{
		digitalWrite(signal_diode, 1);
		delay(125);
		digitalWrite(signal_diode, 0);
		delay(125);
		int check = Serial.parseInt();
		if (check == 1)
		{
			on++;
		}
	}

}

void loop()
{
	int state = 0; //state shows if the pin is on or off
	String data = "";
	String specifier = "";
	String pin_info = "";
	int pin = 0;

	if (Serial.available())
	{
		data = Serial.readString();
		specifier = data.substring(0, 1);
		pin_info = data.substring(1);
		pin = specifier.toInt();

		// ***************************To controlle data in programe***************************** 
		/*
		Serial.println(date);
		Serial.println(specifier);
		Serial.println(pin_info);
		Serial.println(pin);
		*/
    if(pin_info == "1")
      state=1;
    else
      state=0;

		if (pin_info != 0)
		{

			switch (pin)
			{
			case 3:
			{
				if (state == 1)
					digitalWrite(object_ONE, 1);
				
				else
					digitalWrite(object_ONE, 0);
				break;
			}
			case 4:
			{
				if (state == 1)
					digitalWrite(object_TWO, 1);
				else
					digitalWrite(object_TWO, 0);
				
				break;
			}
			case 5:
			{
				if (state == 1)
					digitalWrite(object_THREE, 1);
				else
					digitalWrite(object_THREE, 0);
				
				break;
			}
			case 6:
			{
				int temp = sensors.getTempCByIndex(0);
				int humidity = analogRead(sensor_humidity);



				String sending = String(temp) +";"+ String(humidity);
				Serial.println(sending);
				break;
			}
			default:
				break;
			}
		}
	}
}

