
// the setup function runs once when you press reset or power the board

int ledPin1 = 5;   
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin1, OUTPUT);
   // open a 9600-baud serial connection:
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledPin1, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
