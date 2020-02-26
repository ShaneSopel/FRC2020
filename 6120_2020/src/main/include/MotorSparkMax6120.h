
#ifndef MOTORSPARKMAX6120_H_
#define MOTORSPARKMAX6120_H_

#include "rev/CANSparkMax.h"

  class MotorSparkMax6120
  {
    
    public:

    //setting up motor
   // rev::CANSparkMax motor1{0, rev::CANSparkMax::MotorType::kBrushed};

    // setting up motors can
    //rev::CANEncoder encoder1 = motor1.GetEncoder(rev::CANEncoder::EncoderType::kQuadrature, 4096);

    //Use Pid functionality
    //rev::CANPIDController pidController1 = motor1.GetPIDController();

    //void SMAXXMotorInit();     // this will setup parameters so we can get encoder data. we will need to read encoder data to set up conditions/parameters
    //void SMAXXIntakeControl(); // previous year functions.
    //void SMAXXArmControl();    // previous year functions.
                               // we will need to set up the functions we use this year and add encoder capability. 
    //void SMAXXEncoderReadRotations();
    
    private:
    // PID coefficients
    double kP; 
    double kI;
    double kD;
    double kIz;
    double kFF;
    double kMaxOutput; 
    double kMinOutput;

  };

#endif
