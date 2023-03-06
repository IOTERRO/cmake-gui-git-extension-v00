#include <iostream>
#include "library.h"
#include "moteur.h"
#include "sensor.h"

using namespace std;

shared_ptr<Motor> myMotor = std::make_shared<Motor>();

int main()
{
	myMotor->setDcMotorSensor(2); 
	myMotor->run("DcMotor");
	
	myMotor->setDcMotorSensor(6);
	myMotor->run("DcMotor");

	return 0;
}