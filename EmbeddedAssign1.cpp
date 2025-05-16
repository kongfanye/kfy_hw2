#include <Arduino.h>


void setup() {
  pinMode(27,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(32,OUTPUT);

  
  
}
void blink(int i,int t){
  digitalWrite(i,HIGH);
  delay(t);
  digitalWrite(i,LOW);
}
void loop() {
  blink(27,100);
  blink(25,100);
  blink(26,100);
  blink(33,100);
  blink(32,100);
  blink(33,100);
  blink(26,100);
  blink(25,100);
  
}


