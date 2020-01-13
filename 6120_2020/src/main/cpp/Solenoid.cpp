  #include "Solenoids.h"
  #include "Joystick.h"
  
cyberstangs::DouSolenoid hatchGrabber{0,1};
cyberstangs::DouSolenoid lift{3,4};
cyberstangs::Solenoid hatchShooter{2};

//For hatch grabber
//Solenoids are set in default off

bool extend1 = joystick1.GetRawButton(3);
bool retract1 = joystick1.GetRawButton(2);


//make functions ..... but we dont know what the robot will do yet.... 

void hatchGrabber()
{
	//if the controller button in pressed then the solenoid will extend
	if (extend1)
	{
		hatchGrabber.Set(frc::DoubleSolenoid::Value::kForward);
	}
	//If the button is pressed the solenoid will retract
	if (retract1)
	{
		hatchGrabber.Set(frc::DoubleSolenoid::Value::kReverse);
	}
}

void hatchShooter()
{
	//hatch Shooter
	bool shoot = joystick1.GetRawButton(5);
	if (shoot)
	{
		hatchShooter.Set(true);
		hatchGrabber.Set(frc::DoubleSolenoid::Value::kReverse);
	}
	else
	{
		hatchShooter.Set(false);
	}
}

void lift()
{
	//Robot Lift
	//if the controller button in pressed then the solenoid will extend
	bool shoot2 = joystick1.GetRawButton(6);

	if (shoot2)
	{
		lift.Set(frc::DoubleSolenoid::Value::kReverse);
	}
	else
	{
		lift.Set(frc::DoubleSolenoid::Value::kForward);
	}
}