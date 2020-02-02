#include "ctre/Phoenix.h"
#include "frc/WPILib.h"
//#include "Configs20.h"
//#include <frc/Spark.h>
//#include <frc/VictorSP.h>
//#include "Motor.h"

namespace cyberstangs
{

   /*Hold all of the config data*/
	ctre::phoenix::motorcontrol::can::TalonSRXConfiguration _talon;
	ctre::phoenix::motorcontrol::can::VictorSPXConfiguration _victor;
	ctre::phoenix::sensors::PigeonIMUConfiguration _pigeon;
	ctre::phoenix::CANifierConfiguration _canifier;
    ctre::phoenix::sensors::CANCoderConfiguration _canCoder;
    ctre::phoenix::motorcontrol::can::TalonFXConfiguration _fx;

 //setting the left side of the robot to a spark and creating a group with both motors
    //test
    //frc::Spark m_leftMotor1{0};
    //frc::Spark m_leftMotor2{1};
    //frc::SpeedControllerGroup m_left{m_leftMotor1, m_leftMotor2};
    _victor * _leftMotor1 = new _victor(2);
    //VictorSPX * _leftMotor2 = new VictorSPX(3);

    // setting the right side of the robot to a spark and creating a group with both motors
    //VictorSPX * _rightMotor1 = new VictorSPX(4);
   // VictorSPX * _rightMotor2 = new VictorSPX(5);

    //Arm Pointer
    //VictorSPX * _armMotor = new VictorSPX(6);

    //Intake Motor
    //VictorSPX * _intakeMotor = new VictorSPX(8);

    //set up the elevator  lift system
    //TalonSRX * _talon = new TalonSRX(1);

    std::string _sb;
    int _loops = 0;

    int kSlotIdx = 0;

    /* Talon SRX/ Victor SPX will supported multiple (cascaded) PID loops.
    * For now we just want the primary one.
    */
    int kPIDLoopIdx = 0;

    /*
    * set to zero to skip waiting for confirmation, set to nonzero to wait
    * and report to DS if action fails.
    */
    int kTimeoutMs = 30;

	//	_talon->SetStatusFramePeriod(StatusFrame::Status_1_General_, 5, kTimeoutMs); /* Talon will send new frame every 5ms */
	//	_talon->SetSensorPhase(kSensorPhase);
	//	_talon->SetInverted(kInvert);


  		//set left motor mode and give outputs
	//	_leftMotor1->Set(ControlMode::PercentOutput, leftDrive);
	//	_leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
		//set right motor mode and give outputs
	//	_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
	//	_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
		
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