#include "control_380/Motor.h"
#include "ros/ros.h"
#include <moveit_msgs/MoveGroupActionGoal.h>
#include <ros/console.h>
#include <stdio.h>

control_380::Motor motor;
bool toPublish = false;

void chatterCallback(const moveit_msgs::MoveGroupActionGoal::ConstPtr &msg) {

  motor.angles[0] =
      msg->goal.request.goal_constraints[0].joint_constraints[0].position;
 // ROS_INFO("I heard: [%f]", motor.one);
  motor.angles[1] =
      msg->goal.request.goal_constraints[0].joint_constraints[1].position;
  ;
  motor.angles[2] =
      msg->goal.request.goal_constraints[0].joint_constraints[2].position;
  ;
  motor.angles[3] =
      msg->goal.request.goal_constraints[0].joint_constraints[3].position;
  ;
  motor.angles[4] =
      msg->goal.request.goal_constraints[0].joint_constraints[4].position;
  ;
 motor.angles[5] =
      msg->goal.request.goal_constraints[0].joint_constraints[5].position;
  ;
  toPublish = true;

}

int main(int argc, char **argv) {

  ros::init(argc, argv, "dummy_joint_commands");
  ros::NodeHandle nh;

  ros::Publisher pub = nh.advertise<control_380::Motor>("/motor_move", 1);
  ros::Subscriber sub = nh.subscribe<moveit_msgs::MoveGroupActionGoal>(
      "/move_group/goal", 1, chatterCallback);

  while (ros::ok()) {
    if (toPublish) {
      pub.publish(motor);
      toPublish = false;
    }
    ros::spinOnce();
  }

  return 0;
}
