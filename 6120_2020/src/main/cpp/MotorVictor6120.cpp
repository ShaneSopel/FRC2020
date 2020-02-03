#include "ctre/Phoenix.h"
#include "frc/WPILib.h"
//#include "Configs20.h"
//#include <frc/Spark.h>
//#include <frc/VictorSP.h>
#include "Motor6120.h"
#include "Joystick.h"

namespace cyberstangs
{

	void MotorVictor6120::VicMotorInit()
	{
		//set left motor mode and give outputs
		_leftMotor1->Set(ControlMode::PercentOutput, leftDrive);
		_leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
		
		//set right motor mode and give outputs
		_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
		_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
	}  
	
	void MotorVictor6120::IntakeControl()
	{
		//Intake Control
		//	if (intakeOut > 0)
		//	{
		//		_intakeMotor->Set(ControlMode::PercentOutput, intakeOut);
		//	}
		//	else
		//	{
		//		_intakeMotor->Set(ControlMode::PercentOutput, intakeIn);
		//	}

	}

	void MotorVictor6120::ArmControl()
	{
		//Arm Control
		//	if (toggle) 
		//	{
		//		_armMotor->Set(ControlMode::PercentOutput, -armControl);
		//	}
		//	else{ 
		//		_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
		//	}
	}

}