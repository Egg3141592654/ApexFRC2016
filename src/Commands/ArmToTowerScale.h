#ifndef ArmToTowerScale_H
#define ArmToTowerScale_H

#include "WPILib.h"

class ArmToTowerScale: public Command
{
public:
	ArmToTowerScale();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
