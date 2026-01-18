#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::Motor bottom(11);
inline pros::Motor upper(12);
inline pros::MotorGroup intake_upper({11, 12});
inline ez::Piston loader('A');
inline ez::Piston middle('B');
inline ez::Piston descore('C');