
#ifndef MOTORVIC6120_H_
#define MOTORVIC6120_H_

#include "ctre/Phoenix.h"
#include <frc/Spark.h>
#include <frc/VictorSP.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/speedControllerGroup.h>
#include <frc/speedControllerGroup.inc>

//using namespace ctre::phoenix::motorcontrol::can;

namespace cyberstangs
{

  class Motor6120 
  {

    public:

    void VicMotorInit();

    private: 

    //setting the left side of the robot to a spark and creating a group with both motors
    //test
    //frc::Spark m_leftMotor1{0};
    //frc::Spark m_leftMotor2{1};
    //frc::SpeedControllerGroup m_left{m_leftMotor1, m_leftMotor2};
    
    VictorSPX * _leftMotor1 = new VictorSPX(2);
    VictorSPX * _leftMotor2 = new VictorSPX(3);

    // setting the right side of the robot to a spark and creating a group with both motors
    VictorSPX * _rightMotor1 = new VictorSPX(4);
    VictorSPX * _rightMotor2 = new VictorSPX(5);

    //Arm Pointer
    VictorSPX * _armMotor = new VictorSPX(6);

    //Intake Motor
    VictorSPX * _intakeMotor = new VictorSPX(8);

    //set up the elevator  lift system
   // TalonSRX * _talon = new TalonSRX(1);
   
  };

}

#endif