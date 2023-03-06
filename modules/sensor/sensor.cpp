#include "sensor.h"


Sensor::Sensor():
	_sensorValue(0)
{

}

Sensor::~Sensor()
{

}

unsigned int Sensor::get()
{
	return _sensorValue;
}

void Sensor::set(int val)
{
	_sensorValue = val;
}