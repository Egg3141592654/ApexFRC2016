#ifndef WheelieBar_H
#define WheelieBar_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

#include "../RobotMap.h"
#include "Commands/MoveWheelieBar.h"

class WheelieBar: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<DoubleSolenoid> solenoid;
	bool isLocked = false;
	bool isExtended = false;
public:
	WheelieBar();
	void InitDefaultCommand();
	void Open(bool);
	void SetLocked(bool);
	std::string GetStatus(void);
};

#endif
