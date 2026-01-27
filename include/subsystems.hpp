#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::Motor bottom(4);
inline pros::Motor upper(21);
inline pros::MotorGroup intake_upper({-21, -4});
inline ez::Piston loader('A');
inline ez::Piston middle('B');
inline ez::Piston descore('C');