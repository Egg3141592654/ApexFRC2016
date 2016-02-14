#ifndef ArmToCarry_H
#define ArmToCarry_H

#include "WPILib.h"

class ArmToCarry: public Command
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
