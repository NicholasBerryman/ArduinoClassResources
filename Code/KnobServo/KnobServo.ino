#include <Servo.h>
Servo motor;
int knobPosition = 0;
void setup() {
  pinMode(A0, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  motor.attach(10);

}

void loop() {
  knobPosition = analogRead(1);
  knobPosition = knobPosition/1023;
  knobPosition = knobPosition*180;
  
  Servo.write(knobPosition);
}
