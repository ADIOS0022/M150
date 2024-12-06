#include <Arduino.h>
#define SWITCH1 15

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(23,OUTPUT);//Red1
pinMode(19,OUTPUT);//Yellow1
pinMode(18,OUTPUT);//Green1
pinMode(5,OUTPUT);//Red2
pinMode(17,OUTPUT);//Yellow2
pinMode(16,OUTPUT);//Green2
pinMode(15,INPUT);//Switch
}

void loop() {
  digitalWrite(23,LOW);//R1
  digitalWrite(16,HIGH);//G1
  digitalWrite(18,LOW);//G2
  digitalWrite(5,HIGH);//R2
  delay(1000);
   digitalWrite(5,LOW);//R2
  digitalWrite(18,HIGH);//G2
  digitalWrite(23,HIGH);//R1
  digitalWrite(16,LOW);//G1
  delay(1000);
}
  if (digitalRead(SWITCH1) == HIGH)
  {
    digitalWrite(23,HIGH);//R1
    digitalWrite(16,HIGH);//G1
    delay(400);
    digitalWrite(18,LOW);//G1
    digitalWrite(23,LOW);//R1
    delay(400)
  }
  while (digitalRead(SWITCH1) == LOW)
  {
    digitalWrite(23,LOW);//R1
  digitalWrite(16,LOW);//G1
  digitalWrite(18,HIGH);//G2
  digitalWrite(5,HIGH);//R2
  delay(500);
   digitalWrite(5,LOW);//R2
  digitalWrite(18,LOW);//G2
  digitalWrite(23,HIGH);//R1
  digitalWrite(16,HIGH);//G1
  delay(500);
  }