/*
//----Begin Code (copy from here)----
//Includes:
#include <math.h> //contains common math functions
//Variables:
int delayTime = 1000; //Delay time. 1000 = 1 second.
void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT); //Set pin 7 to output.
}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(7, HIGH); //Set pin 7 to HIGH
delay(delayTime); //wait defined time period before repeating
digitalWrite(7, LOW); //Set pin 7 to LOW
delay(delayTime); //wait defined time period before repeating
}
//----End Code (copy to here)----
*/

/*

Code for KY-008 Laser and Laser Detector
by eLab Peers (C) 2014.

Visit us at:
http://www.elabpeers.com

All rights reserved.

Wiring:
1.  VCC to 5V on Arduino board
2.  GND to GND on Arduino board
3.  S on KY-008 Laser to Pin 6 on Arduino board
4.  OUT on Laser Dector to Pin 7 on Arduino board

*/

// light and sensor

int Laser = 7;
int Detector = 6;
int buzzer = 11, t = 80, dt = 100;

void setup()
{ 
  Serial.begin (9600);
  pinMode(Laser, OUTPUT);
  pinMode(Detector, INPUT);
}

void loop()
{
  digitalWrite(Laser, HIGH);
  boolean val = digitalRead(Detector);
  Serial.println(val);

  if(val == true){
    digitalWrite(buzzer, HIGH);
    delay(dt);
    digitalWrite(buzzer, LOW);
  }
}  


// trip wire
/*
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT); //Buzzer Pin
pinMode(7,INPUT); // Light Sensor
delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;
if(digitalRead(7)==HIGH)
{
  a:
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
  delay(100);
  i++;
  if(i<50){
  goto a;
  }
  
  
  }

}
*/
