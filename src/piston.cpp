#include "piston.hpp"

pros::ADIDigitalOut left_intake(3);
pros::ADIDigitalOut right_intake(4);
pros::ADIDigitalOut claw(1);
pros::ADIDigitalOut PTO(2);
pros::ADIDigitalOut wings(8); // comment this out when robot is finalized
//pros::ADIDigitalOut Left_wing(8); uncomment this when robots are final
//pros::ADIDigitalOut right_wing(8); uncomment this when robots are final

void extend(){
    left_intake.set_value(true);
    right_intake.set_value(true);
}

void retract(){
    left_intake.set_value(false);
    right_intake.set_value(false);
}

/*void extend_wings(){ uncomment this line and everything below it
    left_wing.set_value(true);
    right_wing.set_value(true);
}

void retract_wings(){
    left_wing.set_value(false);
    right_wing.set_value(false);
}*/