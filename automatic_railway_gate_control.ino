#include <Servo.h>  //Load Servo Library
int trigPin=13;//Sensor Trip pin connected to Arduino pin 13
int trigPin2=3;
int echoPin=11;  //Sensor Echo pin connected to Arduino pin 11
int echoPin2=2;
int servoControlPin=6; //Servo control line is connected to pin 6
int count=0;
float pingTime;  //time for ping to travel from sensor to target and return
float pingTime2;
float targetDistance; //Distance to Target in inches
float targetDistance2;
float speedOfSound=776.5; //Speed of sound in miles per hour when temp is 77 degrees.
float speedOfSound2=776.5;

Servo myPointer;  //Create a servo object called myPointer
int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servoControlPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  
  myPointer.attach(servoControlPin);  //Tell arduino where the servo is attached.

}

void loop() {
  // put your main code here, to run repeatedly: 

  count++;
  //for first sensor
  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(15); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent
  delayMicroseconds(10); //Delay in low state
   //for first sensor
  pingTime = pulseIn(echoPin, HIGH);  //pingTime is presented in microceconds
  pingTime=pingTime/1000000; //convert pingTime to seconds by dividing by 1000000 (microseconds in a second)
  pingTime=pingTime/3600; //convert pingtime to hourse by dividing by 3600 (seconds in an hour)
  targetDistance= speedOfSound * pingTime;  //This will be in miles, since speed of sound was miles per hour
  targetDistance=targetDistance/2; //Remember ping travels to target and back from target, so you must divide by 2 for actual target distance.
  targetDistance= targetDistance*63360;    //Convert miles to inches by multipling by 63360 (inches per mile)
  Serial.print("The Distance to Target is: ");
  Serial.print(targetDistance);
  Serial.println(" inches");
  //for second sensor
  digitalWrite(trigPin2, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin2, HIGH); //Set trigPin high
  delayMicroseconds(15); //Delay in high state
  digitalWrite(trigPin2, LOW); //ping has now been sent
  delayMicroseconds(10); //Delay in low state
   pingTime2 = pulseIn(echoPin2, HIGH);  //pingTime is presented in microceconds
  pingTime2=pingTime2/1000000; //convert pingTime to seconds by dividing by 1000000 (microseconds in a second)
  pingTime2=pingTime2/3600; //convert pingtime to hourse by dividing by 3600 (seconds in an hour)
  targetDistance2= speedOfSound2 * pingTime2;  //This will be in miles, since speed of sound was miles per hour
  targetDistance2=targetDistance2/2; //Remember ping travels to target and back from target, so you must divide by 2 for actual target distance.
  targetDistance2= targetDistance2*63360;    //Convert miles to inches by multipling by 63360 (inches per mile)
  Serial.print("The Distance2 to Target is: ");
  Serial.print(targetDistance2);
  Serial.println(" inches");
  
 if(targetDistance<10&& pos!=181 && count>1)
  {
   for (pos = 90; pos<=180; pos += 1)
   { 
    
    myPointer.write(pos);            
    delay(15);
   }
  }
   Serial.println(pos);
  if(targetDistance2<10&& pos==181 && pos!=89)
  {
   for (pos = 180; pos>=90; pos -= 1)
   { 
    
    myPointer.write(pos);            
    delay(15);
   }
  }  
  Serial.println(pos);
  Serial.println(count);
 
  

}