
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 5; 
int ledPin2 = 6;
int ledPin3 = 12;  // select the pin for the LED
int readValue;
int sensorValue;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(sensorPin,INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // open a 9600-baud serial connection:
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  
  sensorValue = analogRead(sensorPin);    
  // write the sensor value to the serial interface:
 
  Serial.println(sensorValue);
  // turn the ledPin on
  if (snesorValue>0 && sensorValue <250){
  digitalWrite(ledPin1, HIGH);  
  }
   if (snesorValue> 255 && sensorValue <550){
  digitalWrite(ledPin2, HIGH);
   }
    if (snesorValue> 520 && sensorValue <750){
  digitalWrite(ledPin3, HIGH);
    }
  // stop the program for <sensorValue> milliseconds:
//  delay(sensorValue);          
//  // turn the ledPin off:        
//  digitalWrite(ledPin1, LOW);   
//  digitalWrite(ledPin2, LOW);
//  digitalWrite(ledPin3, LOW);  
  // stop the program for for <sensorValue> milliseconds:
  delay(25);                  
}

