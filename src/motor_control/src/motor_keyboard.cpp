#include "control_380/Motor.h"
#include "ros/ros.h"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <map>

// Map for movement keys
std::map<char, int> moveBindings{
    {'a', 1}, {'j', 1}, {'s', 1}, {'k', 1}, {'d', 1}, {'l', 1},{'f', 1}, {'g',1}, {'h', 1}, {';', 1}, };

// Reminder message
const char *msg = R"(
)";

// Init variables
char key(' ');

// For non-blocking keyboard inputs
int getch(void) {
  int ch;
  struct termios oldt;
  struct termios newt;

  // Store old settings, and copy to new settings
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;

  // Make required changes and apply the settings
  newt.c_lflag &= ~(ICANON | ECHO);
  newt.c_iflag |= IGNBRK;
  newt.c_iflag &= ~(INLCR | ICRNL | IXON | IXOFF);
  newt.c_lflag &= ~(ICANON | ECHO | ECHOK | ECHOE | ECHONL | ISIG | IEXTEN);
  newt.c_cc[VMIN] = 1;
  newt.c_cc[VTIME] = 0;
  tcsetattr(fileno(stdin), TCSANOW, &newt);

  // Get the current character
  ch = getchar();

  // Reapply old settings
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

  return ch;
}

int main(int argc, char **argv) {
  // Init ROS node
  ros::init(argc, argv, "teleop_twist_keyboard");
  ros::NodeHandle nh;

  // Init cmd_vel publisher
  ros::Publisher pub = nh.advertise<control_380::Motor>("motor_move", 1);

  // Create Twist message
  control_380::Motor motor;

  while (true) {

//    // Get the pressed key
    key = getch();
    motor.angles[0] = 0.0;
    motor.angles[1] = 0.0;
    motor.angles[2] = 0.0;
    motor.angles[3] = 0.0;
    motor.angles[4] = 0.0;
//    // If the key corresponds to a key in moveBindings
    if (moveBindings.count(key) == 1) {
//     // Grab the direction data
      if (key == 'a') {
        motor.angles[0]= -15.0;
      } else if (key == 's') {
        motor.angles[1] = -5.0;
      } else if (key == 'd') {
        motor.angles[2] = -5.0;
      } else if (key == 'f') {
        motor.angles[3] = -5.0;
      } else if (key == 'g') {
        motor.angles[4] = -5.0;
      } else if (key == 'h') {
        motor.angles[0]= 15.0;
      } else if (key == 'j') {
        motor.angles[1] = 5.0;
      } else if (key == 'k') {
        motor.angles[2] = 5.0;
      } else if (key == 'l') {
        motor.angles[3] = 5.0;
      } else if (key == ';') {
        motor.angles[4] = 5.0;
      }

    } 
    
     else {
      // any other key stops all the motors
       motor.angles[0] = 0.0;
       motor.angles[1] = 0.0;
       motor.angles[2] = 0.0;
       motor.angles[3] = 0.0;
       motor.angles[4] = 0.0;
       if (key == '\x03') {
        break;
       }


          }
      // Update the Motor message (in the if statements)

    // Publish it and resolve any remaining callbacks
    pub.publish(motor);
    ros::spinOnce();
  }

  return 0;
}
