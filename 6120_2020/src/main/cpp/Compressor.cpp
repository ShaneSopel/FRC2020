#include <frc/Compressor.h>
#include <iostream>

namespace cyberstangs
{
	void setupCompressor()
	{  
		//Turn compressor on when robot is enabled
		//Compressor Object
		frc::Compressor *c = new frc::Compressor(0);
		c->Enabled();
		c->GetClosedLoopControl();
		c->GetCompressorNotConnectedFault();
		c->SetClosedLoopControl(true);
	}
}
