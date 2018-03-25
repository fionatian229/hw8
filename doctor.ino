int led = 5;
//int brightness = 0;    // how bright the LED is
//int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);    
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
}
