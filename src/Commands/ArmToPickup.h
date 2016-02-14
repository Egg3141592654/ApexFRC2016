#ifndef ArmToPickup_H
#define ArmToPickup_H

#include "WPILib.h"

class ArmToPickup: public Command
{
public:
	ArmToPickup();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
