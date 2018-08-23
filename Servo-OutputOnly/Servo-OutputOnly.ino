#include <Servo.h>
Servo motor;
void setup() {
  pinMode(10, OUTPUT);
  motor.attach(10);

}

void loop() {
  Servo.write(180);
  delay(500);
  Servo.write(0);
  delay(500);
}
