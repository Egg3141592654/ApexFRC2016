#ifndef ArmOverride_H
#define ArmOverride_H

#include "Commands/Subsystem.h"
#include "Commands/OverrideCommand.h"

#include "WPILib.h"

class ArmOverride: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	std::shared_ptr<Talon> left;
	std::shared_ptr<Talon> right;

public:
	ArmOverride();
	void InitDefaultCommand();
	void Drive(float);
};

#endif
