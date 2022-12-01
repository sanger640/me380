#include <AccelStepper.h>
#include <Arduino.h>
#include <Servo.h>
#include <ros.h>
#include <std_msgs/Int16.h>
#include <control_380/Motor.h>

ros::NodeHandle nh;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
AccelStepper stepper1(AccelStepper::FULL4WIRE, 47, 49, 51, 53);
AccelStepper stepper2(AccelStepper::FULL4WIRE, 31, 33, 35, 37);



float angles[6] = {0,0,90,90,90,90};

// atomic functions for servo and stepper
void servo_cb(const float &p_angle, float &s_angle,  Servo &servo) {
  
  s_angle += p_angle;

  if (s_angle < 10) {
    s_angle = 10;
  } 
  if (s_angle > 170) {
    s_angle = 170;
  }
  
  servo.write(s_angle);


}

void stepper_cb2(const float &p_angle, float &s_angle, AccelStepper &stepper) {

  s_angle = p_angle;
  digitalWrite(13, HIGH - digitalRead(13));
  int targetRelSteps = (s_angle / 0.067);  
  stepper.move(targetRelSteps);

}

void stepper_cb1(const float &p_angle, float &s_angle, AccelStepper &stepper) {

  s_angle = p_angle;
  digitalWrite(13, HIGH - digitalRead(13));
  int targetRelSteps = (s_angle / 1.8);
  stepper.move(targetRelSteps);

}

void motor_cb(const control_380::Motor &motor) {

  stepper_cb1(motor.angles[0], angles[0], stepper1);
  stepper_cb2(motor.angles[1], angles[1], stepper2);
  servo_cb(motor.angles[2], angles[2], servo1);
  servo_cb(motor.angles[3], angles[3], servo2);
  servo_cb(motor.angles[4], angles[4], servo3);
  servo_cb(motor.angles[5], angles[5], servo4);

  digitalWrite(13, HIGH - digitalRead(13));

}

ros::Subscriber<control_380::Motor> sub("/motor_move", motor_cb);

void setup() {

  pinMode(13, OUTPUT);
  stepper1.setMaxSpeed(50);
  stepper2.setMaxSpeed(250);
  nh.initNode();
  nh.subscribe(sub);

  servo1.attach(6); // attach it to pin 7
  servo2.attach(7);
  servo3.attach(11);
  servo4.attach(12);

}

void loop() {

  nh.spinOnce();

  stepper1.setSpeed(30);
  stepper1.runSpeedToPosition();
  stepper2.setSpeed(200);
  stepper2.runSpeedToPosition();

}
