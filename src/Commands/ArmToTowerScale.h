#ifndef ArmToTowerScale_H
#define ArmToTowerScale_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmToTowerScale: public CommandBase
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
