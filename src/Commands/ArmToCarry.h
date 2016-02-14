#ifndef ArmToCarry_H
#define ArmToCarry_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmToCarry: public CommandBase
{
public:
	ArmToCarry();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
