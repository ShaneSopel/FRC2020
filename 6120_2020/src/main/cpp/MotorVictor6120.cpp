//#include "Configs20.h"
#include "MotorVictor6120.h"
#include "Robot.h"
/*
	void MotorVictor6120::VicMotorInit(double leftDrive, double rightDrive)
	{
		//set left motor mode and give outputs
		_leftMotor1->Set(ControlMode::PercentOutput, leftDrive);                                              
		_leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
		
		//set right motor mode and give outputs
		_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
		_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
	}  
	
void MotorVictor6120::IntakeControl(double intakeOut, double intakeIn)
	{
		//Intake Control
			if (intakeOut > 0)
			{
				_intakeMotor->Set(ControlMode::PercentOutput, intakeOut);
			}
			else
			{
				_intakeMotor->Set(ControlMode::PercentOutput, intakeIn);
			}

	}

void MotorVictor6120::ArmControl(double toggle, double armControl)
	{
		//Arm Control
		if (toggle) 
			{
				_armMotor->Set(ControlMode::PercentOutput, armControl);
			}
			else{ 
				_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
			}
	}
*/