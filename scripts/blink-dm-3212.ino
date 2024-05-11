/*
  Blink the DM-3212 LEDs

  Turns both LEDs on and off for 0.5 second, contra to eachother, repeatedly.  
*/

#define LED2_BUILTIN 8

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED2_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  digitalWrite(LED2_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED2_BUILTIN, HIGH);
  delay(500);
}
