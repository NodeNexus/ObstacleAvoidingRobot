#include <Servo.h>

Servo leftMotor;
Servo rightMotor;

#define TRIG 8
#define ECHO 9

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  leftMotor.attach(5);   // Left motor PWM pin
  rightMotor.attach(6);  // Right motor PWM pin

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  distance = getDistance();
  Serial.print("Distance
