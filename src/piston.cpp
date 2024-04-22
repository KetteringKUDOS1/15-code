#include "piston.hpp"

pros::ADIDigitalOut left_intake(3);
pros::ADIDigitalOut right_intake(4);
pros::ADIDigitalOut claw(1);
pros::ADIDigitalOut PTO(2);
pros::ADIDigitalOut wiings(8);

void extend(){
    left_intake.set_value(true);
    right_intake.set_value(true);
}

void retract(){
    left_intake.set_value(false);
    right_intake.set_value(false);
}