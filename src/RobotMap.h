#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

// Constants for the motor ports.
// Edit these if the motor ports change.
const int LEFT_FRONT_MOTOR = 1;
const bool LEFT_FRONT_REVERSED = true;

const int LEFT_BACK_MOTOR = 2;
const bool LEFT_BACK_REVERSED = true;

const int RIGHT_FRONT_MOTOR = 3;
const bool RIGHT_REVERSED = false;

const int RIGHT_BACK_MOTOR = 4;
const bool RIGHT_BACK_REVERSED = false;

const int ARM_MOTOR_1 = 5;
const int ARM_MOTOR_1_REVERSED = false;

const int ARM_MOTOR_2 = 6;
const int ARM_MOTOR_2_REVERSED = true;

// Digital Inputs
const int SOLENOID_FINGER = 0;
const int SOLENOID_ARM = 5;
const int SOLENOID_WHEELIEBAR = 4;

// Analog Inputs
const int PID_CONTROL = 0;
const int COMPRESSOR_INPUT = 3;

// PID potentiometer values
const double ARM_START_POSITION = .5;

// Buttons for button joystick
const int ARM_BUTTON = 1;
const int FINGER_BUTTON = 2;
const int WHEELIEBAR_BUTTON = 3;


#endif

