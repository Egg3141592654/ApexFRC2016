#ifndef Finger_H
#define Finger_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Finger: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Finger();
	void InitDefaultCommand();
};

#endif
