#include "ctre/Phoenix.h"
#include "frc/WPILib.h"
//#include "Configs20.h"
//#include <frc/Spark.h>
//#include <frc/VictorSP.h>
#include "MotorVic6120.h"

namespace cyberstangs
{

	void Motor6120::VicMotorInit()
	{

	//std::string _sb;
    //int _loops = 0;
    //int kSlotIdx = 0;

    /* Talon SRX/ Victor SPX will supported multiple (cascaded) PID loops.
    * For now we just want the primary one.
    */
    //int kPIDLoopIdx = 0;

    /*
    * set to zero to skip waiting for confirmation, set to nonzero to wait
    * and report to DS if action fails.
    */
    int kTimeoutMs = 30;
	const bool kSensorPhase = false; /* pick this so self-test stops reporting sensor-out-of-phase */
	const bool kInvert = true;		/* pick this based on your preference on what positive motor output should spin to */

	//set left motor mode and give outputs
	_leftMotor1->Set(ControlMode::PercentOutput, leftDrive);
	_leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
	
	//set right motor mode and give outputs
	_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
	_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
	 

	}  


		
		//Intake Control
	//	if (intakeOut > 0)
	//	{
	//		_intakeMotor->Set(ControlMode::PercentOutput, intakeOut);
	//	}
	//	else
	//	{
	//		_intakeMotor->Set(ControlMode::PercentOutput, intakeIn);
	//	}

		//Arm Control
	//	if (toggle) 
	//	{
	//		_armMotor->Set(ControlMode::PercentOutput, -armControl);
	//	}
	//	else{ 
	//		_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
	//	}


   // double motorOutput = _talon->GetMotorOutputPercent();

    //		if (button1)
	//	{
			/* Position mode - button just pressed */
	//		_talon->Set(ControlMode::Current, leftYstick * 40); /* 40 Amps in either direction */
	//	}
	//	else
	//	{
	//		_talon->Set(ControlMode::PercentOutput, leftYstick);
	//	}
	
}