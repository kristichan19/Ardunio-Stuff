// Define the analog Pins and their corosponding letter
const int analogOutPinG = 8;
const int analogOutPinF = 7;
const int analogOutPinA = 6;
const int analogOutPinB = 5;
const int analogOutPinE = 4;
const int analogOutPinD = 3;
const int analogOutPinC = 2;
//
#include "SevenSegmentDecoder.h"
// IDRK
const int ledPin = 13;
void setup() {
  // Initialize Serial Communication
  Serial.begin(9600);
  // Turn annoying LED Off
  digitalWrite(ledPin, LOW);
  pinMode(analogOutPinG, OUTPUT);
  pinMode(analogOutPinF, OUTPUT);
  pinMode(analogOutPinA, OUTPUT);
  pinMode(analogOutPinB, OUTPUT);
  pinMode(analogOutPinE, OUTPUT);
  pinMode(analogOutPinD, OUTPUT);
  pinMode(analogOutPinC, OUTPUT);   
  pinMode(analogOutPinE, OUTPUT);       
}

void loop() {
  static int DELAY = 1000;
  static int count = 0;
  Serial.println(count);
  digitalWrite(analogOutPinA, LOW);
  digitalWrite(analogOutPinB, LOW);
  digitalWrite(analogOutPinC, LOW);
  digitalWrite(analogOutPinD, LOW);
  digitalWrite(analogOutPinE, LOW);
  digitalWrite(analogOutPinF, LOW);
  digitalWrite(analogOutPinG, LOW);
  decoder(count);
  delay(DELAY);
  if (count >= 15){
    count = 0;
  }else{
  count++;
  }
}

void decoder2(int k){
  if (k == 0){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if (k == 1){
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);;
  }else if(k == 2){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinD, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinG, HIGH);
  }else if(k == 3){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinD, HIGH);
  }else if(k == 4){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if(k == 5){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinD, HIGH);
  }else if(k == 6){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinD, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinG, HIGH);
  }else if(k ==7){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
  }else if(k ==8){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinD, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if(k ==9){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinC, HIGH);
  }else if(k ==10){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if(k ==11){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinD, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if(k == 12){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinD, HIGH);
  }else if(k ==13){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinB, HIGH);
    digitalWrite(analogOutPinC, HIGH);
    digitalWrite(analogOutPinD, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinF, HIGH);
  }else if(k == 14){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinG, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinD, HIGH);
  }else if (k == 15){
    digitalWrite(analogOutPinA, HIGH);
    digitalWrite(analogOutPinF, HIGH);
    digitalWrite(analogOutPinE, HIGH);
    digitalWrite(analogOutPinD, HIGH);
  }
}
