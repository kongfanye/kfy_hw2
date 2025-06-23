#include <Arduino.h>
const int ledPin1=12;
const int ledPin2=14;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() 
{
  if(Serial.available() > 0)
{
    String receivedCommand = Serial.readStringUntil('\n');
    receivedCommand.trim();
    if(receivedCommand == "1")
    {
      digitalWrite(ledPin1,HIGH);
      Serial.println("LED1亮");
    }
    else if(receivedCommand == "2")
    {
      digitalWrite(ledPin2, HIGH);
      Serial.println("LED2亮");
    }
    else if(receivedCommand == "01")
    {
      digitalWrite(ledPin1, LOW);
      Serial.println("LED1灭");
    }
    else if(receivedCommand == "02")
    {
      digitalWrite(ledPin2, LOW);
      Serial.println("LED2灭");
    }
    else
    {
      Serial.println("无效指令");
    }
}
}
