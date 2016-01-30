/*
 * Robot.h
 *
 *  Created on: Jan 18, 2016
 *      Author: epgul
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include "WPILib.h"
#include "Commands/Command.h"
#include "OI.h"

// Subsystem includes
#include "Subsystems/TankDrive.h"

class Robot : public IterativeRobot
{
public:
	static std::shared_ptr<TankDrive> drivetrain;
	static std::shared_ptr<OI> oi;

private:
	void RobotInit(void);
	void DisabledInit(void);
	void DisabledPeriodic(void);
	void AutonomousInit(void);
	void AutonomousPeriodic(void);
	void TeleopInit(void);
	void TeleopPeriodic(void);
	void TestPeriodic(void);
};



#endif /* ROBOT_H_ */
