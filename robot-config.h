#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"
//
using namespace vex;
vex::brain Brain;
vex::motor LeftMotor  (vex::PORT1, vex::gearSetting::ratio18_1, false);
vex::motor RightMotor (vex::PORT2, vex::gearSetting::ratio18_1, true);
vex::motor LeftMotor_2  (vex::PORT3, vex::gearSetting::ratio18_1, false);
vex::motor RightMotor_2 (vex::PORT4, vex::gearSetting::ratio18_1, true);
vex::motor Intake (vex::PORT5, vex::gearSetting::ratio36_1,true);
vex::motor Intake_2 (vex::PORT6, vex::gearSetting::ratio36_1,false);
vex::motor ArmMotor (vex::PORT7, vex::gearSetting::ratio36_1, true);
vex::motor Tilter (vex::PORT8, vex::gearSetting::ratio36_1,true);
vex::controller Controller1 = vex::controller();
