#include <frc/smartdashboard/smartdashboard.h>
#include "MotorSparkMax6120.h"
#include "Robot.h"

	//This function will set our SPARK motors initalization
	void  MotorSparkMax6120::SMAXXMotorInit()
	{
		
		// We are settting our parameters from
		// MotorSparkMaxx6120.h
		this->kP         = 0.1;
		this->kI         = 1e-4;
		this->kD         = 1;
		this->kIz        = 0;
		this->kFF        = 0; 
		this->kMinOutput =-1;
		this->kMaxOutput = 1;  

		// Setting motor to default factory Settings
		motor1.RestoreFactoryDefaults();

		// Setting feedback device aka setting what encoder to talk to.
		pidController1.SetFeedbackDevice(encoder1);

		// Set the PID with the parameters above.
		pidController1.SetP(kP);
		pidController1.SetI(kI);
		pidController1.SetD(kD);
		pidController1.SetIZone(kIz);
		pidController1.SetFF(kFF);
		pidController1.SetOutputRange(kMinOutput, kMaxOutput);

		// display PID coefficients on SmartDashboard
    	frc::SmartDashboard::PutNumber("P Gain", kP);
    	frc::SmartDashboard::PutNumber("I Gain", kI);
    	frc::SmartDashboard::PutNumber("D Gain", kD);
    	frc::SmartDashboard::PutNumber("I Zone", kIz);
    	frc::SmartDashboard::PutNumber("Feed Forward", kFF);
    	frc::SmartDashboard::PutNumber("Max Output", kMaxOutput);
    	frc::SmartDashboard::PutNumber("Min Output", kMinOutput);
    	frc::SmartDashboard::PutNumber("Set Rotations", 0);
	}  
	
void  MotorSparkMax6120::SMAXXIntakeControl()
	{
		/*
		//Intake Control
			if (intakeOut > 0)
			{
				_intakeMotor->Set(ControlMode::PercentOutput, intakeOut);
			}
			else
			{
				_intakeMotor->Set(ControlMode::PercentOutput, intakeIn);
			}
		*/
		int x;

	}

void  MotorSparkMax6120::SMAXXArmControl()
	{
		/*
		//Arm Control
		/*if (toggle) 
			{
				_armMotor->Set(ControlMode::PercentOutput, armControl);
			}
			else{ 
				_armMotor->Set(ControlMode::PercentOutput,.4 * -armControl);
			}*/
		int x;

	}