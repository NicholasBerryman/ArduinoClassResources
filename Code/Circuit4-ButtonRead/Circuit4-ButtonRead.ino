void setup() {
  //Initialise USB ports so you can send data through later
  Serial.begin(9600); //9600 means 9600 bits/sec
  //Set pin A0 (Analog pin 0) to input mode with active internal pull-up resistor
  pinMode(A0, INPUT_PULLUP);
  
}

void loop() {
  //Print a line of text with the state of the button to the serial monitor
  Serial.println(digitalRead(A0)); //1 means not pressed, 0 means pressed

  //Don't forget to open the serial monitor and make sure the bit-rates match
}
