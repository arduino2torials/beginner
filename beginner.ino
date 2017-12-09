const int led = 13;
const int milliseconds = 100;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(milliseconds);
  digitalWrite(led, LOW);
  delay(milliseconds);
}
