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
	
void  MotorSparkMax6120::SMAXXEncoderReadRotations()
	{
		 // read PID coefficients from SmartDashboard
    	double p = frc::SmartDashboard::GetNumber("P Gain", 0);
    	double i = frc::SmartDashboard::GetNumber("I Gain", 0);
    	double d = frc::SmartDashboard::GetNumber("D Gain", 0);
    	double iz = frc::SmartDashboard::GetNumber("I Zone", 0);
    	double ff = frc::SmartDashboard::GetNumber("Feed Forward", 0);
    	double max = frc::SmartDashboard::GetNumber("Max Output", 0);
    	double min = frc::SmartDashboard::GetNumber("Min Output", 0);
    	double rotations = frc::SmartDashboard::GetNumber("Set Rotations", 0);

		// if PID coefficients on SmartDashboard have changed, write new values to controller
    	if((p != kP)) { pidController1.SetP(p); kP = p; }
    	if((i != kI)) { pidController1.SetI(i); kI = i; }
    	if((d != kD)) { pidController1.SetD(d); kD = d; }
    	if((iz != kIz)) { pidController1.SetIZone(iz); kIz = iz; }
    	if((ff != kFF)) { pidController1.SetFF(ff); kFF = ff; }
    	if((max != kMaxOutput) || (min != kMinOutput)) { 
        pidController1.SetOutputRange(min, max); 
        kMinOutput = min; kMaxOutput = max; 
    }

	//rev's example we will use this for now. 

    /**
     * PIDController objects are commanded to a set point using the 
     * SetReference() method.
     * 
     * The first parameter is the value of the set point, whose units vary
     * depending on the control type set in the second parameter.
     * 
     * The second parameter is the control type can be set to one of four 
     * parameters:
     *  rev::ControlType::kDutyCycle
     *  rev::ControlType::kPosition
     *  rev::ControlType::kVelocity
     *  rev::ControlType::kVoltage
     */
    pidController1.SetReference(rotations, rev::ControlType::kPosition);
    frc::SmartDashboard::PutNumber("SetPoint", rotations);
    frc::SmartDashboard::PutNumber("ProcessVariable", encoder1.GetPosition());

	}

void  MotorSparkMax6120::SMAXXIntakeControl()
	{

		//not using, if we needed with an encoder it would go here. 


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
		
		//not using, if we needed an arm or something with an encoder it would go here. 
		
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