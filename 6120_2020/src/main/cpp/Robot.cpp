/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"
//#include "MotorSparkMax6120.h"
//#include "MotorVictor6120.h"
//#include "Joystick6120.h"
#include <iostream>



#include <frc/smartdashboard/SmartDashboard.h>

//MotorVictor6120 moving;
  
void Robot::RobotInit() {
  m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);


}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * Live
 * Window and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() 
{
 
}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
  m_autoSelected = m_chooser.GetSelected();
  // m_autoSelected = SmartDashboard::GetString("Auto Selector",
  //     kAutoNameDefault);
  std::cout << "Auto selected: " << m_autoSelected << std::endl;

  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::AutonomousPeriodic() {
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::TeleopInit() {

 
	//_leftMotor1->Set(ControlMode::PercentOutput, joystick6120::leftDrive);                                              
//	_leftMotor2->Set(ControlMode::PercentOutput, joystick6120::leftDrive);
		
		//set right motor mode and give outputs
//	_rightMotor1->Set(ControlMode::PercentOutput, joystick6120::rightDrive);
//	_rightMotor2->Set(ControlMode::PercentOutput, joystick6120::rightDrive);
 //MotorVictor6120 intake;
 // intake.IntakeControl(joystick6120::intakeIn, joystick6120::intakeOut);

 // MotorVictor6120 armControl;
 // armControl.ArmControl(joystick6120::toggle, joystick6120::armControl);

}

void Robot::TeleopPeriodic() {     

  
//set Motor Input Constants
  double leftDrive  = -_joystick1->GetRawAxis(1);
  //double leftDrive  = -_joystick1->GetRawAxis(1);
  double rightDrive = _joystick1->GetRawAxis(5);
  double armControl = _joystick2->GetRawAxis(5);
  double intakeOut  = _joystick1->GetRawAxis(3);
  double intakeIn   = -_joystick1->GetRawAxis(2);
  bool toggle       = _joystick2->GetRawButton(5);

  double intakeOut1 = _joystick1->GetRawAxis(3);
  double intakeIn2  = _joystick1->GetRawAxis(2);

  double feeder = _joystick2->GetRawAxis(2);

  double shooter = joystick2.GetRawAxis(3);
  double aimer = joystick2.GetRawAxis(1);



 // moving.VicMotorInit(joystick6120::leftDrive, joystick6120::rightDrive);
  //MotorSparkMax6120 setup;
  //setup.SMAXXEncoderReadRotations();
 //set left motor mode and give outputs
  if (leftDrive > .2)
  {
	  _leftMotor1->Set(ControlMode::PercentOutput, leftDrive);                                              
	  _leftMotor2->Set(ControlMode::PercentOutput, leftDrive);
  }	
	else
  {
    _leftMotor1->Set(ControlMode::PercentOutput, 0);                                              
	  _leftMotor2->Set(ControlMode::PercentOutput, 0);
  }
  
  if (rightDrive > .2)
  {
  	//set right motor mode and give outputs
	_rightMotor1->Set(ControlMode::PercentOutput, rightDrive);
	_rightMotor2->Set(ControlMode::PercentOutput, rightDrive);
  
  }
  else
  {
    	//set right motor mode and give outputs
	_rightMotor1->Set(ControlMode::PercentOutput, 0);
	_rightMotor2->Set(ControlMode::PercentOutput, 0);
  }
 
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
				_armMotor->Set(ControlMode::PercentOutput, armControl);
			}
			else{ 
				_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
			}
    
    //feeder control
    feederMotor->Set(ControlMode::PercentOutput, feeder);

    //Shooter Control
    /*You will have to scale the shooter velocity, right now the raw
    controller input is controlling velocity*/
    
    shooterPIDController.SetReference(shooter, rev::ControlType::kVelocity);
    //aimerControl
    aimerPIDController.SetReference(aimer, rev::ControlType::kPosition);
    //change percentOutput to Position mode
    _aimerMotorVictor->Set(ControlMode::PercentOutput,.4 * aimerEncoder);
    

}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
