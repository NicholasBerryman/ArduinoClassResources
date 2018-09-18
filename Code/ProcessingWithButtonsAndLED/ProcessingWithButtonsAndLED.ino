bool leftPressed = false;
bool rightPressed = false;
String currentText = "";

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop() {
  leftPressed = !digitalRead(A0);
  rightPressed = !digitalRead(A1);

  if (leftPressed)
    Serial.println("Left!");
  else if (rightPressed)
    Serial.println("Right!");
  else
    Serial.println("None!");
    
  if (Serial.available()){
    if (Serial.read() == 1)
      digitalWrite(3,HIGH);
    else
      digitalWrite(3, LOW);
  }
}
