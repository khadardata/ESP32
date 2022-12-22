void setup() {
  // Set the LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(LED_BUILTIN, HIGH);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
  // Turn off the LED
  digitalWrite(LED_BUILTIN, LOW);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
}
