const int stepPin = 3;
const int dirPin = 4; // HIGH == LEFT, LOW == RIGHT

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
  digitalWrite(dirPin, HIGH);
  for (int x =0; x < 1000; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
  delay(500);
  digitalWrite(dirPin, LOW);
  for (int x =0; x < 1000; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
  delay(500);
}
