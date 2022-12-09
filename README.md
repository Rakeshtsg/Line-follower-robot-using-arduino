# Line-follower-robot-using-arduino


//Using a IR Sensor|L298N Motor Driver|Arduino UNO

////Circuit. use Pin 10-ENA,

Pin 9-IN1,

Pin 8-IN2,

Pin 7-IN3,

Pin 6-IN4,

Pin 5 ENB

//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg

//INTERFACE: Arduino 


PLEASE REFER THIS CIRCUITRY FOR THE APPLICATION 
![WhatsApp Image 2022-11-02 at 4 28 58 PM (1)](https://user-images.githubusercontent.com/109905492/199473634-c0bb7b8b-713b-4e6f-9e55-1ce575f18867.jpeg)

OUR PROTOTYPE 
![WhatsApp Image 2022-11-19 at 7 42 28 PM](https://user-images.githubusercontent.com/109905492/202854926-ccfcf134-5cee-4b08-87d8-64d055048e09.jpeg)

Here is a simple algorithm that can be used to develop a line following robot:

1]Attach infrared sensors to the front and bottom of the robot, facing forward and downward, respectively. These sensors will be used to detect the line.

2]Set the robot's initial position and orientation. The robot can start facing in any direction, but it should be positioned such that it is on the line.

3]Continuously read the values from the infrared sensors. If the front sensor detects the line, the robot should move forward. If the bottom sensor detects the line, the robot should adjust its orientation to stay on the line.

4]Use PID (proportional-integral-derivative) control to adjust the robot's movement and orientation. The PID controller can be used to calculate the necessary adjustments to the robot's movement and orientation based on the readings from the infrared sensors.

5]Repeat steps 3 and 4 until the robot reaches its destination.

6]This algorithm uses infrared sensors to detect the line, and PID control to adjust the robot's movement and orientation. By continuously reading the values from the sensors and making the necessary adjustments, the robot can follow the line and reach its destination.
