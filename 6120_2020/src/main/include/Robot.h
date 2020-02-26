/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include "ctre/Phoenix.h"
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Joystick.h>

#include "ctre/phoenix/motorcontrol/can/VictorSPX.h"

using namespace ctre::phoenix::motorcontrol::can;

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;


/*
  //set Motor Input Constants
  double leftDrive  = -_joystick1->GetRawAxis(1);
  //double leftDrive  = -_joystick1->GetRawAxis(1);
  double rightDrive = _joystick1->GetRawAxis(5);
  double armControl = _joystick2->GetRawAxis(5);
  double intakeOut  = _joystick1->GetRawAxis(3);
  double intakeIn   = -_joystick1->GetRawAxis(2);
  bool toggle       = _joystick2->GetRawButton(5);

  double intakeOut1 = _joystick2->GetRawAxis(3);
  double intakeIn2  = _joystick2->GetRawAxis(2);

  //Elevator inputs
  get gamepad axis 
  double leftYstick = _joystick2->GetY();
  bool button1      = _joystick2->GetRawButton(1);
  bool extend1      = joystick1.GetRawButton(3);
  bool retract1     = joystick1.GetRawButton(2);
*/


 private:

  //Victor SPX
   // setting the right side of the robot to a spark and creating a group with both motors
   VictorSPX * _leftMotor1 = new VictorSPX(6);
   VictorSPX * _leftMotor2 = new VictorSPX(3);

   // setting the right side of the robot to a spark and creating a group with both motors
   VictorSPX * _rightMotor1 = new VictorSPX(7);
   VictorSPX * _rightMotor2 = new VictorSPX(2);

  //Arm Pointer
   VictorSPX * _armMotor = new VictorSPX(1);

   //Intake Motor
   VictorSPX * _intakeMotor = new VictorSPX(5);

 
  frc::Joystick joystick1{0};
  frc::Joystick joystick2{1};
  frc::Joystick * _joystick1 = new frc::Joystick(0);
  frc::Joystick * _joystick2 = new frc::Joystick(1);


  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
