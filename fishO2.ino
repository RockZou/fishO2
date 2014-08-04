/*
  Arduino Starter Kit example
 Project 9  - Motorized Pinwheel
 
 This sketch is written to accompany Project 9 in the
 Arduino Starter Kit
 
 Parts required:
 10 kilohm resistor
 pushbutton
 motor
 9V battery
 IRF520 MOSFET
 1N4007 diode
 
 Created 13 September 2012
 by Scott Fitzgerald
 
 http://arduino.cc/starterKit
 
 This example code is part of the public domain 
 */

// named constants for the switch and motor pins
const int switchPin = 2; // the number of the switch pin
const int motorPin =  9; // the number of the motor pin

const int logicPin1=4;
const int logicPin2=3;

int switchState = 0;  // variable for reading the switch's status

int i=50;

void setup() {
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);      
  // initialize the switch pin as an input:
  pinMode(switchPin, INPUT);     
  
  pinMode(logicPin1,OUTPUT);
  pinMode(logicPin2,OUTPUT);
}

void loop(){
  
  if (i>50000)
  {
    delay(500000);
    i=0;
  }
  i++;
  // check if the switch is pressed.
  if (i%2==0) {     
    // turn motor on:    
    digitalWrite(motorPin, HIGH);
    digitalWrite(logicPin1,HIGH);
    digitalWrite(logicPin2,LOW);
    
  } 
  else {
    // turn motor off:
    digitalWrite(motorPin, LOW);
  }
  delay(10);
  
}
