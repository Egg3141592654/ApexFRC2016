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

const int FEEDER_MOTOR_PORT = 7;
const bool FEEDER_MOTOR_REVERSED = false;

// Digital Inputs
const int SOLENOID_FINGER = 0;
const int SOLENOID_ARM = 1;
const int SOLENOID_WHEELIEBAR_OUT = 2;
const int SOLENOID_WHEELIEAR_IN = 3;

// Analog Inputs
const int PID_CONTROL = 0;
const int COMPRESSOR_INPUT = 3;

// PID potentiometer values
const double ARM_HANG_POSITION = 2.5;
const double ARM_DRAWBRIDGE_POSITION = 2.5;
const double ARM_CARRY_POSITION = 2.5;
const double ARM_SALLY_POSITION = 2.5;
const double ARM_PICKUP_POSITION = 2.3;
const double ARM_LOW_POSITION = 2.0;

// This value is for tuning the responsivenes of the
// joystick override.
const double TUNING_CONSTANT = .25;
const int ARM_ADJUST_AXIS = 4;

// PID Constant Values
const double ARM_P = .1;
const double ARM_I = 0.;
const double ARM_D = 0.;

// Buttons for right joystick
const int ARM_BUTTON = 1;
const int FINGER_BUTTON = 2;
const int WHEELIEBAR_BUTTON = 3;
const int FEEDER_FORWARD = 4;
const int FEEDER_STOP = 5;
const int FEEDER_INGEST = 6;

// Buttons for left Joystick
const int ARM_CARRY_BUTTON = 1;
const int ARM_DRAWBRIDGE_BUTTON = 2;
const int ARM_HANG_BUTTON = 3;
const int ARM_SALLY_BUTTON = 4;
const int ARM_PICKUP_BUTTON = 5;
const int ARM_LOW_BUTTON = 6;

// Trigger constants (need to actually be set to something real to work
const double FINGER_UPPER_LIMIT = 5.0;
const double FINGER_LOWER_LIMIT = 0.0;
const double WHEELIE_UPPER_LIMIT = 5.0;
const double WHEELIE_LOWER_LIMIT = 0.0;
const double ELEVATOR_UPPER_LIMIT = 5.0;
const double ELEVATOR_LOWER_LIMIT = 0.0;

#endif

