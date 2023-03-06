#include <iostream>
#include "moteur.h"

enum class MotorType{DC , STEPPER};

#define DC		 "DcMotor"
#define Stepper  "StepperMotor"

using namespace std;

shared_ptr<Motor> myMotor = std::make_shared<Motor>();


void dcMotor(int sensorVal)
{
	myMotor->setDcMotorSensor(sensorVal);
	myMotor->run(DC);
}

void stepperMotor(int sensorVal)
{
	myMotor->setStepperMotorSensor(sensorVal);
	myMotor->run(Stepper);
}


int main()
{
	cout << "**************** Start DC Motor****************" << endl;
	dcMotor(2);
	dcMotor(6);
	cout << "**************** End DC Motor****************" << endl;

	cout << "****************Start Stepper Motor****************" << endl;
	stepperMotor(6);
	stepperMotor(12);
	stepperMotor(21);
	cout << "****************End Stepper Motor****************" << endl;
	return 0;
}
