  #include "Solenoids.h"
  #include <frc/DoubleSolenoid.h>
  #include <frc/Solenoid.h>

	//Setup Solenoid
	//frc::DoubleSolenoid hatchgrabber(0,1);
	//frc::DoubleSolenoid lift(3,4);
	//frc::Solenoid hatchshooter(2);

	//For hatch grabber
	//Solenoids are set in default off
	
	//make functions ..... but we dont know what the robot will do yet.... 
/*	void DouSolenoid6120::hatchGrabber(double extend, double retract)
	{
		//if the controller button in pressed then the solenoid will extend
		if (extend)
		{
			hatchgrabber.Set(frc::DoubleSolenoid::Value::kForward);
		}
		//If the button is pressed the solenoid will retract
		if (retract)
		{
			hatchgrabber.Set(frc::DoubleSolenoid::Value::kReverse);
		}
	}

	void Solenoid6120::hatchShooter(double shoot)
	{
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

	void DouSolenoid6120::lifter(double shoot2)
	{
		//Robot Lift
		if (shoot2)
		{
			lift.Set(frc::DoubleSolenoid::Value::kReverse);
		}
		else
		{
			lift.Set(frc::DoubleSolenoid::Value::kForward);
		}
	}
*/
