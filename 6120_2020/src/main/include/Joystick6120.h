/*#ifndef JOYSTICK6120_H_
#define JOYSTICK6120_H_

#include <frc/Joystick.h>

namespace joystick6120
{
  //Joysticks
  frc::Joystick joystick1{0};
  frc::Joystick joystick2{1};
  frc::Joystick * _joystick1 = new frc::Joystick(0);
  frc::Joystick * _joystick2 = new frc::Joystick(1);

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


  // Solenoid based
  //hatch Shooter
  //bool shoot        = joystick1.GetRawButton(5);

  //if the controller button in pressed then the solenoid will extend
  //bool shoot2       = joystick1.GetRawButton(6);

}

#endif
*/