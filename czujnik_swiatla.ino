#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

int czujnik_swiatla;

void setup()
{
     Serial.begin (9600);
}


void loop()
{
  czujnik_swiatla = analogRead(12);
  //delay(500);
  //Serial.println("czujka");
  Serial.println(czujnik_swiatla);
  delay(500);
}

