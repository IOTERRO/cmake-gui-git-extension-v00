#pragma once

#include <string>
#include <iostream>

class Sensor
{
public:
	Sensor();
	~Sensor();
	
	unsigned int get();
	void set(int val);
	
private:
	int _sensorValue;
};
