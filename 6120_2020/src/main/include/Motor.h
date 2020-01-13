#include "ctre/Phoenix.h"
#include <frc/Spark.h>
#include <frc/VictorSP.h>

namespace cyberstangs
{

  class Motor 
  {
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
    TalonSRX * _talon = new TalonSRX(1);

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

  };

}