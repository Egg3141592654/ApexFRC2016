#ifndef Arm_h
#define Arm_h

#include "Commands/Subsystem.h"
#include "WPILib.h"

#include "../RobotMap.h"
#include "Commands/MoveArm.h"
class Arm: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Solinoid* solinoid;
public:
	Arm();
		void InitDefaultCommand();
		void Open(bool);
};

#endif
