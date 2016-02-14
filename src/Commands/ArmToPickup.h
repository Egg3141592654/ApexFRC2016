#ifndef ArmToPickup_H
#define ArmToPickup_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmToPickup: public CommandBase
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
