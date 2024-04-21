#include "pros/motors.h"
#include "pros/motors.hpp"
#include "PTO_motors.hpp"


pros::Motor left_PTO_motor(18, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor right_PTO_motor(19, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);