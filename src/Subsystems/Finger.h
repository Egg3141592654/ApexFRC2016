#ifndef Finger_H
#define Finger_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

#include "../RobotMap.h"
#include "Commands/MoveFinger.h"
class Finger: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Solenoid* solenoid;
public:
	Finger();
	void InitDefaultCommand();
	void Open(bool);

};

#endif
