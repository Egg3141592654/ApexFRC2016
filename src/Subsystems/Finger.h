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
	std::shared_ptr<Solenoid> solenoid;
	bool isLocked = false;
public:
	Finger();
	void InitDefaultCommand();
	void Open(bool);
	void SetLocked(bool);
	std::string GetStatus(void);
};

#endif
