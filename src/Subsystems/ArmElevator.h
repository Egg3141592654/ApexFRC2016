#ifndef ArmElevator_H
#define ArmElevator_H

#include "Commands/Subsystem.h"
#include "Commands/MoveArm.h"
#include "WPILib.h"

class ArmElevator: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<Solenoid> solenoid;
	bool isLocked = false;
public:
	ArmElevator();
	void InitDefaultCommand();
	void Open(bool);
	void SetLocked(bool);
	std::string GetStatus();
};

#endif
