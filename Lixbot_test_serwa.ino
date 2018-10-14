#include <Servo.h> //import bilioteki Servo
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Servo servo; // definicja nazwy, może być dowolna, w tym przypadku servo

int servoPin = 5; // defincja numeru pinu podłaczenia serwa

void setup()
{
  Serial.begin (9600);
   servo.attach(servoPin);
}

void loop()
{
 servo.write(15); //ustaw serwo w pozycji 0 stopni
 delay(1000); //czekaj sekundę
 servo.write(45); //ustaw serwo w pozycji 0 stopni
 delay(1000); //czekaj sekundę
Serial.println("prawo");
 delay(2000);
 // servo.write(90); //ustaw serwo w pozycji 90 stopni
 // delay(1000); //czekaj sekundę
 // servo.write(135); //ustaw serwo w pozycji 90 stopni
 /// delay(1000); //czekaj sekundę
//  servo.write(180); //ustaw serwo w pozycji 180 stopni
 // delay(1000); //czekaj sekundę
 // servo.write(90); //ustaw serwo w pozycji 90 stopni
 // delay(1000); //czekaj sekundę
}


