// Blinking LED
// turn on the LED for half a second, then turn off for half a second, repetedly
// using Arduino Mega
// By: Pratik Chatrath
// Date: June 7, 2017

const int ledPin = 12; // the number of the LED pin

void setup()
{
  pinMode(ledPin,OUTPUT); //initialize the pin as output
}


void loop() 
{
  digitalWrite(ledPin, HIGH); // turn on the LED
  delay(500);                 // wait for half a second
  digitalWrite(ledPin, LOW);  // turn off the LED
  delay(500);                 // wait for half a second
}
  
