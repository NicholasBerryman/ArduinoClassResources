#include <Servo.h>

#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

IRrecv irrecv(3);
decode_results results;

Servo s;

void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(11,OUTPUT);
  s.attach(11);
  irrecv.enableIRIn();  
  Serial.println("Beginning");
}

void loop() {
  if (irrecv.decode(&results)){
    irrecv.resume();
  }
  if (results.value == 0xFF30CF){
    Serial.println("1");
    s.write(0);
    delay(500);
    s.write(180);
    delay(500);
    results.value = 0;
  }
  else if (results.value == 0xFF18E7){
    Serial.println("2");
    s.write(45);
    results.value = 0;
  }
  else if (results.value == 0xFF7A85){
    Serial.println("3");
    s.write(135);
    results.value = 0;
  }
  delay(100);
}
