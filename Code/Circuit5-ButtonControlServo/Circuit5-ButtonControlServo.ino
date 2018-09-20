//Import servo library so you can use servo functions
#include <Servo.h>

//Create a variable representing the servo
Servo s;

//Create a boolean variable representing the button not being pressed
//A boolean is a type of variable that can either be false, or true, nothing else
bool buttonNotPressed;

void setup() {
  //Set pin A0 to input mode
  pinMode(A0, INPUT_PULLUP);
  //Set pin 10 to output mode for controlling servo
  pinMode(10,OUTPUT);
  //Associate the servo variable with pin 10, just like the real-life servo
  s.attach(10);
}

void loop() {
  //Set buttonNotPressed variable based on the electrical signal recieved on pin A0
  buttonNotPressed = digitalRead(A0); //not pressed = true, pressed = false

  //Check if buttonNotPressed is true
  if (buttonNotPressed){
    //Only execute this part if true
    //Set servo to 0 degrees
    s.write(0);
  }
  else{
    //Otherwise execute this part
    //Set servo to 180 degrees
    s.write(180);
  }
}
