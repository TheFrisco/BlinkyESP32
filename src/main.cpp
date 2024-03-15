// Roberts First Arduino ... Not Quite "Hello World!" LOL
#include <Arduino.h>

int led = 12;
int onDelay = 2000;
int offDelay = 200;

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  // print it out in many formats:
  Serial.println("on"); 
  delay(onDelay);           // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  Serial.println("off"); 
  delay(offDelay);          // wait for a second
}