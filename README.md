# Motion Planning for 6 DoF Robotic Manipulator

The repository contains the ROS packages to control the motors of the manipulator, and perform motion planning using MoveIt.

It also contains the URDF of the manipulator along with the Arduino Files used to communicate between the host machine (PC) and the Arduino which was attached to the manipulator.

This repository was part of a project for the ME380 mechanical design project at University of Waterloo.

## Next Steps:
-> Add a Program which:
  - Queries the Arduino for current motor angles (service/client)
  - Motor Angles -> IK Computation -> Position
  - Saves the position as one of the goal states 
    - Can have a max of 2 as a start (excluding home position)
    - 0: Home State
    - 1: Saved State 1
    - 2: Saved State 2
    (Look at how the moveit demo is saving the goal state)
  - When the goal state is called using the corresponding number key:
    - Publishes the angles to /motor_move topic which subsribed by the Arduino

-> Explore the moveit simulator and add constraints/objects representing the real world

-> Add the updated URDF with the correct zeroed positions for the servo motors 
