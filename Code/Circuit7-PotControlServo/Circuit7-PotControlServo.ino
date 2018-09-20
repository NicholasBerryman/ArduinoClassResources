#include <Servo.h>

//Create variable representing a servo
Servo s;

//Create variable representing the position of the potentiometer
int potValue; // int = integer, i.e whole number

void setup() {
  //Set pin 10 to output mode
  pinMode(10,OUTPUT);
  //Associate servo variable with pin 10
  s.attach(10);
  //Set pin A0 to input mode
  pinMode(A0, INPUT);
}

void loop() {
  //Set potValue variable to the analog value detected on pin A0
  potValue = analogRead(0); //~0 = close to one side, ~1024 = closer to the other side
  
  //Set potValue's new value to its current value over 1024, multiplied by 255
  //analogRead() gives value between 0 and 1024, while servo takes between 0 and 180, so this converts it
  potValue = potValue/1024.0 * 180;

  //Set servo position based on value of potValue variable
  s.write(potValue);
}
