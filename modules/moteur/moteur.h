#pragma once

#include <string>
#include <iostream>
#include "dcMotor.h"
#include "sensor.h"


class Motor
{
public:
	Motor();
	~Motor();
	
	unsigned int run(std::string type);
	std::shared_ptr<DcMotor> getDcMotor();
	void setDcMotorSensor(int val);
	//std::shared_ptr<DcMotor> Motor::getStepperMotor();
private:
	std::shared_ptr<DcMotor> _dcMotor;
	std::shared_ptr<Sensor> _dcMotorSensor;
};
