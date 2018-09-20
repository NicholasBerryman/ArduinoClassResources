//Include the servo library - lets you use servo functions
#include <Servo.h>

//Create a variable representing a servo
Servo s;

void setup() {
  //Set pin 10 to output mode (must output to servo)
  pinMode(10,OUTPUT);

  //Set the servo variable to use pin 10
  s.attach(10);
}

void loop() {
  s.write(180); //Set servo to 180 degrees
  delay(500); //wait 500ms
  s.write(0); //Set servo to 0 degrees
  delay(500); //wait 500ms

  //Try changing the numbers in servo.write(??) and see what happens
}
