import processing.serial.*;
import java.awt.Robot;
import java.awt.event.KeyEvent;

Serial arduinoPort; 


void setup() {
  size(256, 256); 

  printArray(Serial.list());
  
  String portName = Serial.list()[0];
  arduinoPort = new Serial(this, portName, 9600);
}


String arduinoText = "";
void serialEvent(Serial arduinoPort) throws Exception{
  String read = "";
  if (arduinoPort.available() > 0){
    read = arduinoPort.readStringUntil('\n');
  }
  if (!arduinoText.equals(read) && read != null){
    arduinoText = read;
  
    Robot keyboard = new Robot();
    if (arduinoText.contains("Left!")){
      keyboard.keyPress(KeyEvent.VK_UP);  
    }
    else if (arduinoText.contains("Right!")){
      keyboard.keyPress(KeyEvent.VK_DOWN);  
    }
    else{
      keyboard.keyRelease(KeyEvent.VK_UP);
      keyboard.keyRelease(KeyEvent.VK_DOWN);
    }
  }
}

void keyPressed(){
   if (key == ' '){
     arduinoPort.write(1);
   }
}

void keyReleased(){
   if (key == ' '){
     arduinoPort.write(0);
   }
   
}

void draw() {
  background(0);
  text(arduinoText,100,128);
}
