/*
 * rosserial Servo Control Example
 *
 * This sketch demonstrates the control of hobby R/C servos
 * using ROS and the arduiono
 *
 * For the full tutorial write up, visit
 * www.ros.org/wiki/rosserial_arduino_demos
 *
 * For more information on the Arduino Servo Library
 * Checkout :
 * http://www.arduino.cc/en/Reference/Servo
 */

#include <AccelStepper.h>
#include <Arduino.h>
#include <control_380/Motor.h>
#include <ros.h>
#include <std_msgs/Int16.h>

ros::NodeHandle nh;

// Servo servo;
AccelStepper joint1;

float tpose = 0;
void servo_cb(const control_380::Motor &cmd_msg) {
  tpose = cmd_msg.one;
  // servo.write(tpose); //set servo angle, should be from 0-180
  digitalWrite(13, HIGH - digitalRead(13)); // toggle led
}

void accel_cb(const control_380::Motor &motor) {
  tpose = motor.one;
  digitalWrite(13, HIGH - digitalRead(13));
  float targetAbsSteps = tpose / 1.8;
  joint1.moveTo(targetAbsSteps);
}

ros::Subscriber<control_380::Motor> sub("/motor_move", accel_cb);

void setup() {
  pinMode(13, OUTPUT);
  joint1.setMaxSpeed(1000);
  // joint1.setSpeed(250);
  nh.initNode();
  nh.subscribe(sub);
  // servo.attach(7); //attach it to pin 7
}

void loop() {
  nh.spinOnce();
  joint1.setSpeed(50);
  joint1.runSpeedToPosition();
  delay(1);
}