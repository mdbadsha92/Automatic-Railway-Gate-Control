                                           Automatic Railway Gate Control
                                           
Project Basic:
Our project is designed to automatically control the railway gate at the level crossing. 
In general, level crossing gates are operated manually by a gate keeper. The gate keeper receives the information about the train arrival from a near station. When the train starts to leave the station, the station in-charge delivers this information to the closest gatekeeper to get ready. 
But that faces a lot of challenges due to human errors such as level cross accidents, collisions, etc.  This human intervention can be avoided by automating the process.
The proposed system uses two Ultrasonic sensors to detect the arrival and departure of trains at the railway level crossing and Arduino to control the opening/closing of gates. The system uses one Ultrasonic sensors to detect the arrival of the train and the other sensor to detect the departure of the train. When the arrival of the train is sensed, gates will close which indicating the arrival of the train on the track. When the second sensor detects the train the motor operates to close the gate. The gate remains closed until the train completely moves away from the level cross. Thus automation of the gate operations at the railway level cross is achieved using sensors.


Objectives :
Our main objectives is decrease the number of railway collision.

Equipment:
1. Arduino
2. L293d motor driver ic
3. Two Ultrasonic sensor
4. one Dc geared motor 30 RPM
5. 12volt Power supply (SMPS)
6. hot melt gun
7. A wooden or plastic rod for gate 
8. some wires, screws 

Design:
 For Design we need:
(1)	Servo motor (work with 5 volt): A servo motor is a rotary actuator that allows for precise control of angular position. It consists of a motor coupled to a sensor for position feedback which will control to open the gate or to close the gate.

 
(2) Two Ultrasonic sensor:
Ultrasonic sensor will be used to detect the obstacle that means the train. The principle of ultrasonic sensor is similar to sonar or radar in which  interpretation of echoes from radio or sound waves to evaluate the attributes of a target by generating the high-frequency-sound waves (around 40kHz). The transducer used for converting energy into ultrasound or sound waves with ranges above human hearing range is called an ultrasonic transducer.
 
(3)Connect servo into the Arduino.
 
(4) Connect sensor to the Arduino.
 

(5) Finally connect all sensor and servo motor and make code to control the servo. 

(6)See the output video of whole project in Youtube: https://www.youtube.com/watch?v=JLkU6r9Eo8s&feature=youtu.be
(7)Google drive link with project report and project proposal:https://drive.google.com/open?id=0B1rTkGJf6RKGZkZQRzEzZnhubEU
