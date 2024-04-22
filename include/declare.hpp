#pragma once
#include "main.h"

inline pros::Motor left_PTO_motor(18, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_DEGREES);
inline pros::Motor right_PTO_motor(19, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
inline pros::Motor intake_motor(16, pros::E_MOTOR_GEARSET_06, false);