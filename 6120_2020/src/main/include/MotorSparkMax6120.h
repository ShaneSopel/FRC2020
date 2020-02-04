
#ifndef MOTORSPARKMAX6120_H_
#define MOTORSPARKMAX6120_H_

#include "rev/CANSparkMax.h"

  //setting up motor
  rev::CANSparkMax motor1{0, rev::CANSparkMax::MotorType::kBrushed};

  class MotorVictor6120
  {
   public:

    void VicMotorInit(double leftDrive, double rightDrive);
    void IntakeControl(double intakeOut, double intakeIn);
    void ArmControl(double toggle, double armControl); 
  };

  class MotorSparkMax6120
  {
    void SMAXXMotorInit();
    void SMAXXIntakeControl(); // previous year functions.
    void SMAXXArmControl();    // previous year functions.
                               // we will need to set up the functions we use this year and add encoder capability. 
  };

#endif
