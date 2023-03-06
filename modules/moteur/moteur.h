#pragma once

#include <string>
#include <iostream>
#include "dcMotor.h"
#include "sensor.h"
#include "stepperMotor.h"

class Motor
{
public:
	Motor();
	~Motor();
	
	unsigned int run(std::string type);
	std::shared_ptr<DcMotor> getDcMotor();
	std::shared_ptr<StepperMotor> getStepperMotor();
	void setDcMotorSensor(int val);
	void setStepperMotorSensor(int val);
	//std::shared_ptr<DcMotor> Motor::getStepperMotor();
private:
	std::shared_ptr<DcMotor> _dcMotor;
	std::shared_ptr<StepperMotor> _stepperMotor;
	std::shared_ptr<Sensor> _dcMotorSensor;
	std::shared_ptr<Sensor> _stepperMotorSensor;
};
