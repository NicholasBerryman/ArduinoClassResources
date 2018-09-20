//Create variable representing the position of the potentiometer
int potValue; // int = integer, i.e whole number

void setup() {
  //Initialise USB ports
  Serial.begin(9600);
  //Set pin A0 to input mode
  pinMode(A0, INPUT);
}

void loop() {
  //Set potValue variable to the analog value detected on pin A0
  potValue = analogRead(0); //~0 = close to one side, ~1023 = closer to the other side
  //Print line of text to serial monitor containing the value of the potValue variable
  Serial.println(potValue);
}
