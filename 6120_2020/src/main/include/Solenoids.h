#ifndef SOLENIODS_H_
#define SOLENIODS_H_


#include <frc/DoubleSolenoid.h>
#include <frc/Solenoid.h>

namespace cyberstangs
{

    class Solenoid : public frc::Solenoid
    {
    public: 
        // Setting the PCM ports of the shooter and creating the shooter object
        explicit Solenoid(int channel);
        Solenoid(int moduleNumber, int channel);
        ~Solenoid();
        void Set(bool on) override;
        bool Get() const override;
        void hatchShooter();

    };

    class DouSolenoid : public frc::DoubleSolenoid
    {
    public:

        explicit DouSolenoid(int forwardChannel, int reverseChannel);
        ~DouSolenoid();
        void Set(Value value) override;
        Value Get() const override;
        void hatchGrabber();
        void lifter();

    };

} // end cyberstang

#endif