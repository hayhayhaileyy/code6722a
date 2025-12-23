#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::Motor bottom(1);
inline pros::Motor upper(10);
inline pros::MotorGroup intake_upper({1, 10});
inline ez::Piston piston1('A');
inline ez::Piston piston2('B');