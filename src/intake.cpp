#include "intake.hpp"
#include "pros/motors.h"
#include "pros/motors.hpp"

pros::Motor intake_motor(1, pros::E_MOTOR_GEARSET_06, true);


void intakein(){
    intake_motor.move_velocity(600);
}

void intakeout(){
    intake_motor.move_velocity(-600);
}

void intakestop(){
    intake_motor.move_velocity(0);
}