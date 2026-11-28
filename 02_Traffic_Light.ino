
// Assign digital pins to each LED
const int redLED = 13;
const int yellowLED = 12;
const int greenLED = 11;

void setup() {
  // Assign pins as an output
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Red light - Stop
  digitalWrite(redLED, HIGH);
  delay(5000); //5 second delay
  digitalWrite(redLED, LOW);

  // Green light - Go
  digitalWrite(greenLED, HIGH);
  delay(5000); //5 second delay
  digitalWrite(greenLED, LOW);

  // Yellow light - Speed up, it's almost red
  digitalWrite(yellowLED, HIGH);
  delay(2000); //2 second delay
  digitalWrite(yellowLED, LOW);
}

//HIGH assigns pin 5V and low assings 0V
