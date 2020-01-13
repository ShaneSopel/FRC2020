//#include "ctre/Phoenix.h"
//#include <frc/Spark.h>
//#include <frc/VictorSP.h>
#include "Motor.h"

namespace cyberstangs
{

		Motor::_talon->ConfigSelectedFeedbackSensor(
			FeedbackDevice::CTRE_MagEncoder_Relative, 0, kTimeoutMs);
		_talon->SetStatusFramePeriod(StatusFrame::Status_1_General_, 5, kTimeoutMs); /* Talon will send new frame every 5ms */
		_talon->SetSensorPhase(kSensorPhase);
		_talon->SetInverted(kInvert);


  		//set left motor mode and give outputs
		_leftMotor1->Set(ControlMode::PercentOutput, leftDrive);
		_leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
		//set right motor mode and give outputs
		_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
		_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
		
		//Intake Control
		if (intakeOut > 0)
		{
			_intakeMotor->Set(ControlMode::PercentOutput, intakeOut);
		}
		else
		{
			_intakeMotor->Set(ControlMode::PercentOutput, intakeIn);
		}

		//Arm Control
		if (toggle) 
		{
			_armMotor->Set(ControlMode::PercentOutput, -armControl);
		}
		else{ 
			_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
		}


    double motorOutput = _talon->GetMotorOutputPercent();

    		if (button1)
		{
			/* Position mode - button just pressed */
			_talon->Set(ControlMode::Current, leftYstick * 40); /* 40 Amps in either direction */
		}
		else
		{
			_talon->Set(ControlMode::PercentOutput, leftYstick);
		}

}