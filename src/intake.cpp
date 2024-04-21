#include "pros/motors.h"
#include "pros/motors.hpp"

pros::Motor intake_motor(16, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);

void intake_in(){
intake_motor.move_velocity(600);
}

void intake_out(){
    intake_motor.move_velocity(-600);
}

void intake_stop(){
    intake_motor.move_velocity(0);
}