// with arduino
//Using a Arduino Nano|ir sensor
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 
//You need to install the required libraries before uploading the code.

const int ledpin=13; // led pin and sound pin are not changed throughout the process
const int soundpin=A2;
const int threshold=200; // sets threshold for sound sensor
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
  int soundsens=analogRead(soundpin); // read analog data from sensor
  if (soundsens>=threshold) {
    digitalWrite(ledpin, HIGH); // turn led on
    delay(1000);
  }
  else{
    digitalWrite(ledpin, LOW);
  }
}
