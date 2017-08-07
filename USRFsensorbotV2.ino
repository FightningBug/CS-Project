#include "MotorDriver.h"
MotorDriver motor;
const int pingPin = 5;
const int ledPin  = 6;

void setup()
{
  motor.begin();
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  
}
void loop()
{
 int cm = ping(pingPin); // " int cm " must be defined in both "loop" and "else".
 
  if (cm < 10) // " cm " is the value returned by the Ultrasonic sensor.
 {
  int cm = ping(pingPin) ; // The sensors function has priority over the motors. Therefore it's written first.
  Serial.println(cm);
  digitalWrite(ledPin, HIGH); // Led is used to confirm that the sensor is funtioning normally.
  delay(cm * 10);
  digitalWrite(ledPin, LOW);
  delay(cm * 10);
  motor.speed(0, -100);
  motor.speed(1, 100);
 }
 
  else
  {
  
  int cm = ping(pingPin) ; // The sensors function has priority over the motors. Therefore it's written first.
  Serial.println(cm);
  digitalWrite(ledPin, HIGH); // Led is used to confirm that the sensor is funtioning normally.
  delay(cm * 10);
  digitalWrite(ledPin, LOW);
  delay(cm * 10);
  motor.speed(0, 70); // Motor channal 0
  motor.speed(1, 70); // Motor channal 1
  }
}

int ping(int pingPin)
{
  long duration, cm;
  
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  
  cm = microsecondsToCentimeters(duration);
  return cm;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}

//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888


