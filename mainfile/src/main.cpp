/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Bayside High School Robotics                     */
/*    Created:      Fri Nov 15 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
  #include "vex.h"
using namespace vex;
// A global instance of vex::brain used for printing to the V5 brain screen
// A global instance of vex::competition
vex::competition Competition;
// define your global instances of motors and other devices here
/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/
void pre_auton( void ) {
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
 int right = 850;
 int left = -850;
 
void moveTiles(int tiles, int vel) {
  int dis = tiles * 1000; //Sub the value for how long it takes to move 2ft here
  LeftMotor.setVelocity(vel, velocityUnits::pct);
  LeftMotor_2.setVelocity(vel, velocityUnits::pct);
  RightMotor.setVelocity(vel, velocityUnits::pct);
  RightMotor_2.setVelocity(vel, velocityUnits::pct);
  LeftMotor.spin(directionType::fwd);
  RightMotor.spin(directionType::fwd);
  LeftMotor_2.spin(directionType::fwd);
  RightMotor_2.spin(directionType::fwd);
  vex::task::sleep(dis);
  LeftMotor.stop();
  LeftMotor_2.stop();
  RightMotor.stop();
  RightMotor_2.stop();
}
void turn (int angle){
LeftMotor.spin(directionType::fwd);
RightMotor.spin(directionType::rev);
LeftMotor_2.spin(directionType::fwd);
RightMotor_2.spin(directionType::rev);
vex::task::sleep(angle);
LeftMotor.stop();
LeftMotor_2.stop();
RightMotor.stop();
RightMotor_2.stop();
}
void armUp(){
  ArmMotor.spin(directionType::fwd);
  vex::task::sleep(1000);
  ArmMotor.stop();
}
void armDown(){
ArmMotor.spin(directionType::rev);
vex::task::sleep(1000);
ArmMotor.stop();
}
void trayReset(){
  Tray.spin(directionType::fwd);
  vex::task::sleep(1000);
  Tray.stop();
}
void trayExfill(){
  Tray.spin(directionType::fwd);
  vex::task::sleep(1000);
  Tray.stop();
}
void Deploy(){
  // Arms move up to push the tray allowing the three stages to flip up
    
    LeftMotor.setVelocity(40, velocityUnits::pct);
    LeftMotor_2.setVelocity(40, velocityUnits::pct);
    RightMotor.setVelocity(40, velocityUnits::pct);
    RightMotor_2.setVelocity(40, velocityUnits::pct);
    ArmMotor.setVelocity(40, velocityUnits::pct);
    Intake.setVelocity(40, velocityUnits::pct);
    Intake_2.setVelocity(40, velocityUnits::pct);

    ArmMotor.spin(directionType::rev);
    vex::task::sleep(1000);
    ArmMotor.stop();
    ArmMotor.spin(directionType::fwd);
    vex::task::sleep(700);
    ArmMotor.stop();
    // Move forward & and Anti-tips should have deployed
    LeftMotor.spin(directionType::fwd);
    RightMotor.spin(directionType::fwd);
    LeftMotor_2.spin(directionType::fwd);
    RightMotor_2.spin(directionType::fwd);
    vex::task::sleep(500);
    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();
}
void intakeSpin(int vel){
Intake.setVelocity(vel, velocityUnits::pct);
Intake_2.setVelocity(vel, velocityUnits::pct);
Intake.spin(directionType::fwd);
Intake_2.spin(directionType::fwd);
}
void noMove(){
LeftMotor.stop();
LeftMotor_2.stop();
RightMotor.stop();
RightMotor_2.stop();
Intake.stop();
Intake_2.stop();
ArmMotor.stop();
}

void Deploy_1(){

    LeftMotor.setVelocity(40, velocityUnits::pct);
    LeftMotor_2.setVelocity(40, velocityUnits::pct);
    RightMotor.setVelocity(40, velocityUnits::pct);
    RightMotor_2.setVelocity(40, velocityUnits::pct);
    ArmMotor.setVelocity(40, velocityUnits::pct);
    Intake.setVelocity(40, velocityUnits::pct);
    Intake_2.setVelocity(40, velocityUnits::pct);

    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);
    
    vex::task::sleep(500);
    
    Intake.stop();
    Intake_2.stop();

    ArmMotor.spin(directionType::rev);
    
    vex::task::sleep(1000);
    
    ArmMotor.stop();

    ArmMotor.spin(directionType::fwd);
   
    vex::task::sleep(1000);
    
    ArmMotor.stop();

    LeftMotor.spin(directionType::fwd);
    RightMotor.spin(directionType::fwd);
    LeftMotor_2.spin(directionType::fwd);
    RightMotor_2.spin(directionType::fwd);

    vex::task::sleep(500);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();


}

void auton1 (){

  Deploy_1();

    LeftMotor.spin(directionType::fwd);
    RightMotor.spin(directionType::fwd);
    LeftMotor_2.spin(directionType::fwd);
    RightMotor_2.spin(directionType::fwd);
    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);

    vex::task::sleep(2000);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();

    LeftMotor.spin(directionType::rev);
    RightMotor.spin(directionType::rev);
    LeftMotor_2.spin(directionType::rev);
    RightMotor_2.spin(directionType::rev);
    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);

    vex::task::sleep(2000);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();

    LeftMotor.spin(directionType::fwd);
    RightMotor.spin(directionType::rev);
    LeftMotor_2.spin(directionType::fwd);
    RightMotor_2.spin(directionType::rev);
    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);

    vex::task::sleep(850);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();

    LeftMotor.spin(directionType::fwd);
    RightMotor.spin(directionType::fwd);
    LeftMotor_2.spin(directionType::fwd);
    RightMotor_2.spin(directionType::fwd);
    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);

    vex::task::sleep(2000);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();

    Tray.spin(directionType::fwd);
    vex::task::sleep(1000);
    Tray.stop();

    Tray.spin(directionType::rev);
    Intake.spin(directionType::fwd);
    Intake_2.spin(directionType::fwd);

    vex::task::sleep(500);
    
    Tray.stop();
    Intake.stop();
    Intake_2.stop();

    Tray.spin(directionType::rev);
    vex::task::sleep(1000);
    Tray.stop();

    LeftMotor.spin(directionType::rev);
    RightMotor.spin(directionType::rev);
    LeftMotor_2.spin(directionType::rev);
    RightMotor_2.spin(directionType::rev);

    vex::task::sleep(1000);

    LeftMotor.stop();
    RightMotor.stop();
    LeftMotor_2.stop();
    RightMotor_2.stop();

}

void autonomous( void ) {

    auton1();

}
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
void usercontrol( void ) {
  // User control code here, inside the loop
while(true) {
        LeftMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
        RightMotor.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
        LeftMotor_2.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct); //(Axis3+Axis4)/2
        RightMotor_2.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);//(Axis3-Axis4)/2
        if(Controller1.ButtonR1.pressing()) {
            ArmMotor.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else if(Controller1.ButtonL1.pressing()) {
            ArmMotor.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else {
            ArmMotor.stop(brakeType::brake);
        }
        if(Controller1.ButtonY.pressing()) {
            Tray.spin(directionType::fwd, 50, velocityUnits::pct);
        }
        else if(Controller1.ButtonRight.pressing()) {
            Tray.spin(directionType::rev, 50, velocityUnits::pct);
        }
        else {
            Tray.stop(brakeType::brake);
        }
         if(Controller1.ButtonR2.pressing()) {
            Intake.spin(directionType::fwd, 100, velocityUnits::pct);
            Intake_2.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else if(Controller1.ButtonL2.pressing()) {
            Intake.spin(directionType::rev, 100, velocityUnits::pct);
            Intake_2.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else {
            Intake.stop(brakeType::brake);
            Intake_2.stop(brakeType::brake);
        }
       vex::task::sleep(20);
    }
}
//
// Main will set up the competition functions and callbacks.
//
int main() {
    //Set up callbacks for autonomous and driver control periods.
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
    //Run the pre-autonomous function.
    pre_auton();
    //Prevent main from exiting with an infinite loop.
    while(1) {
      vex::task::sleep(100);//Sleep the task for a short amount of time to prevent wasted resources.
    }
}