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
AccelStepper stepper1;

//float st_pose = 0;
//float sv_pose = 0;
//float sv_pose2 = 0;
//float sv_pose3 = 0;
//float sv_pose4 = 0;

float angles[5] = {0,0,0,0,0};

// atomic functions for servo and stepper
void servo_cb(const float &p_angle, float &s_angle,  Servo &servo) {
  
  s_angle += p_angle;
  if (s_angle >= 0 && s_angle <= 180) {
    servo.write(s_angle);
  } else if (s_angle < 0) {
    s_angle = 0;
  } else if (s_angle > 180) {
    s_angle = 180;
  }

}

void stepper_cb(const float &p_angle, float &s_angle, Servo servo) {

  s_angle = p_angle;
  digitalWrite(13, HIGH - digitalRead(13));
  float targetRelSteps = st_pose / 1.8;
  joint1.move(targetRelSteps);

}

void motor_cb(const control_380::Motor &motor) {

  stepper_cb(motor.angle[0], angle[0], stepper1);
  servo_cb(motor.angle[1], angle[1], servo1);
  servo_cb(motor.angle[2], angle[2], servo2);
  servo_cb(motor.angle[3], angle[3], servo3);
  servo_cb(motor.angle[4], angle[4], servo4);

//  // Stepper Motor Control
//  st_pose = motor.one;
//  float targetAbsSteps = st_pose / 1.8;
//  joint1.move(targetAbsSteps);
//  // Servo Motor Control
//  sv_pose += motor.two;
//  if (sv_pose >= 0 && sv_pose <= 180) {
//    servo.write(sv_pose);
//  } else if (sv_pose < 0) {
//    sv_pose = 0;
//  } else if (sv_pose > 180) {
//    sv_pose = 180;
//  }
//
//  sv_pose2 += motor.three;
//  if (sv_pose2 >= 0 && sv_pose2 <= 180) {
//    servo2.write(sv_pose2);
//  } else if (sv_pose2 < 0) {
//    sv_pose2 = 0;
//  } else if (sv_pose2 > 180) {
//    sv_pose2 = 180;
//  }
//
//  sv_pose3 += motor.four;
//  if (sv_pose3 >= 0 && sv_pose3 <= 180) {
//    servo3.write(sv_pose3);
//  } else if (sv_pose3 < 0) {
//    sv_pose3 = 0;
//  } else if (sv_pose3 > 180) {
//    sv_pose3 = 180;
//  }
//
//  sv_pose4 += motor.five;
//  if (sv_pose4 >= 0 && sv_pose4 <= 180) {
//    servo4.write(sv_pose4);
//  } else if (sv_pose4 < 0) {
//    sv_pose4 = 0;
//  } else if (sv_pose4 > 180) {
//    sv_pose4 = 180;
//  }
//
  digitalWrite(13, HIGH - digitalRead(13));

}

ros::Subscriber<control_380::Motor> sub("/motor_move", motor_cb);

void setup() {

  pinMode(13, OUTPUT);
  stepper1.setMaxSpeed(1000);

  nh.initNode();
  nh.subscribe(sub);

  servo1.attach(7); // attach it to pin 7
  servo2.attach(8);
  servo3.attach(9);
  servo4.attach(10);
//  sv_pose = servo.read();
//  sv_pose2 = servo2.read();
//  sv_pose3 = servo3.read();
//  sv_pose4 = servo4.read();
}

void loop() {

  nh.spinOnce();

  stepper1.setSpeed(800);
  stepper1.runSpeedToPosition();

}
