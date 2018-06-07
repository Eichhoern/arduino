const int ledPort = LED_BUILTIN;
const int ledOn = 500;
const int ledOff = 100;

void setup() {
  pinMode(ledPort, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(ledOn);
  digitalWrite(LED_BUILTIN, LOW);
  delay(ledOff);
}

