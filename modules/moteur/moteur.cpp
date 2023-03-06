#include "moteur.h"

Motor::Motor()
{
	_dcMotor = std::make_shared<DcMotor>();
	_dcMotorSensor = std::make_shared<Sensor>();
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

	}

	return 0;
}

std::shared_ptr<DcMotor> Motor::getDcMotor()
{
	return _dcMotor;
}

void Motor::setDcMotorSensor(int val)
{
	_dcMotorSensor->set(val);
}