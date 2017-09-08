//header files for pitch frequencies
#include "pitches.h"

int sensorPin = A0; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);  //pin to set
}

void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor

if(sensorValue>80){                 //condition for intensity of light //this is for 3.3k ohm resistor and will change if you use resistor with other value
    int randNumber= random(800, 1500);  //random function to give random effect to buzzer
    tone(12, 31,100);
    tone(12, 33,200);
    tone(12, 35,200);
    delay(randNumber);
    noTone(12);
}
else {
  digitalWrite(12,LOW);
}
Serial.println(sensorValue); //prints the values coming from the sensor on the terminal
}
