#include "moteur.h"

Motor::Motor()
{
	_dcMotor = std::make_shared<DcMotor>();
	_stepperMotor = std::make_shared<StepperMotor>();
	_dcMotorSensor = std::make_shared<Sensor>();
	_stepperMotorSensor = std::make_shared<Sensor>();
}

Motor::~Motor()
{

}

unsigned int Motor::run(std::string type)
{
	if (type == "DcMotor")
	{
		if (_dcMotorSensor->get() > 5)
			_dcMotor->run();
		else
			std::cout << "we can't run the dc motor " << std::endl;
	}
	else if (type == "StepperMotor")
	{
		if (_stepperMotorSensor->get() > 20)
			_stepperMotor->run();
		else
			std::cout << "we can't run the stepper motor " << std::endl;
	}

	return 0;
}

std::shared_ptr<DcMotor> Motor::getDcMotor()
{
	return _dcMotor;
}

std::shared_ptr<StepperMotor> Motor::getStepperMotor()
{
	return _stepperMotor;
}

void Motor::setDcMotorSensor(int val)
{
	_dcMotorSensor->set(val);
}

void Motor::setStepperMotorSensor(int val)
{
	_stepperMotorSensor->set(val);
}