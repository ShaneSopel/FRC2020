#ifndef SOLENIODS_H_
#define SOLENIODS_H_

#include <frc/DoubleSolenoid.h>
#include <frc/Solenoid.h>

    class Solenoid6120 
    {
    public: 
        void hatchShooter(double shoot);
    }; 

    class DouSolenoid6120
    {
    public:
        void hatchGrabber(double extend, double retract);
        void lifter(double shoot2);
    };

#endif