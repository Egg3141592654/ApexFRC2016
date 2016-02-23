#ifndef Finger_H
#define Finger_H

#include <Commands/Subsystem.h>
#include <cstdbool>
#include <memory>
#include <string>

class Solenoid;

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
