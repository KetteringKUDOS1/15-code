#pragma once
#include "main.h"

extern pros::ADIDigitalOut wings;
extern pros::ADIDigitalOut left_intake;
extern pros::ADIDigitalOut claw;
extern pros::ADIDigitalOut right_intake;
extern pros::ADIDigitalOut PTO;

extern void extend();
extern void retract();