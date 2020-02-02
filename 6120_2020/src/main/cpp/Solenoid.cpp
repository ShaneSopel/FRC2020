  #include "Solenoids.h"
  #include "Joystick.h"

namespace cyberstangs
{
	DouSolenoid hatchgrabber{0,1};
	DouSolenoid lift{3,4};
	Solenoid hatchshooter{2};

	//For hatch grabber
	//Solenoids are set in default off

	bool extend1 = joystick1.GetRawButton(3);
	bool retract1 = joystick1.GetRawButton(2);

	//make functions ..... but we dont know what the robot will do yet.... 
	void DouSolenoid::hatchGrabber()
	{
		//if the controller button in pressed then the solenoid will extend
		if (extend1)
		{
			hatchgrabber.Set(frc::DoubleSolenoid::Value::kForward);
		}
		//If the button is pressed the solenoid will retract
		if (retract1)
		{
			hatchgrabber.Set(frc::DoubleSolenoid::Value::kReverse);
		}
	}

	void Solenoid::hatchShooter()
	{
		//hatch Shooter
		bool shoot = joystick1.GetRawButton(5);
		if (shoot)
		{
			hatchshooter.Set(true);
			hatchgrabber.Set(frc::DoubleSolenoid::Value::kReverse);
		}
		else
		{
			hatchshooter.Set(false);
		}
	}

	void DouSolenoid::lifter()
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
}