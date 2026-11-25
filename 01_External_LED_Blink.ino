//Assigns digital pin 13 to LED light
const int ledPin = 13;

void setup() {
  //13 is an output
  pinMode(ledPin, OUTPUT);
}

//loop runs until Uno3 resests
void loop() {
  //turn LED on
  digitalWrite(ledPin, HIGH);
  //delay waits 1 second
  delay(1000);
  //turn LED off
  digitalWrite(ledPin, LOW);
  //delay waits 1 second
  delay(1000);
}