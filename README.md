# Metal-Detector-Robot
## Introduction
This personal project is aimed at enhancing my knowledge of robotics and Arduinos.

The project initially involved creating a prototype of a metal detector robot with increased degrees of freedom, enabling it to reach greater distances. 
![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/8cad9f5a-66b8-4a31-9e18-154096bb097b)


Considering the rising costs of metalworking, I also wanted to develop a cost-effective solution, which led me to research 3D printed arms. I aimed to combine elements from two existing designs:

With metal working being more and more expensive, I also wanted to make something that could be cheap to produce, so I began to do reasearch on 3D printed arms.

I wanted to find a mix between these 2 designs:
![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/1ac7a15d-87f0-4092-a5b4-591baf9983e3)

![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/b585522e-e362-4efb-837b-7943f3da84a7)

Additionally, I aimed to automate the robot as the previous designs relied on manual control through a remote.

## Achitecture
The robot consists of a 4WD project kit car comprising an L298N motor driver and four DC motors, an Arduino Uno, a Raspberry Pi 3A, two NEMA OKY7414 stepper motors, an MG996 servo, a metal detector kit, two stepper drivers, a CNC V3 hat for the Arduino, batteries, and wiring. To complete the arm assembly, I 3D printed a robot arm from Thingiverse ([RobotArm by ftobler - Thingiverse](https://www.thingiverse.com/thing:1718984)), originally intended for an Arduino Mega. The arm required bearings and screws for proper functionality.

### Electrical connections
![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/bdb7db30-3529-4c4b-add9-63b85ec0caf2)
## Software
The entire project revolves around GRBL, a lightweight G Code interpreter developed in C. This setup allows the Raspberry Pi to calculate the required movements and the Arduino to execute them through the CNC hat, enabling more complex control of the arm.

While GRBL officially supports only stepper motors, there is a modified version called [**grbl-servo**](https://github.com/cprezzi/grbl-servo) that also supports servo control.

G-Code is transmitted from the Raspberry Pi to the Arduino using a serial connection. Additionally, the metal detector sends a high pulse to the Raspberry Pi through pin 36. Furthermore, alongside controlling the arm, the Raspberry Pi manages the DC motors, enabling the car to move.

## Final assembly
![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/fe044741-ffc6-4bca-9ce5-f19b934e0f4c)
![image](https://github.com/chrdd/Metal-Detector-Robot/assets/75358954/ecf79d06-bed4-44ba-a14f-df4da5c2f3fc)

