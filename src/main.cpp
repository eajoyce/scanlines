#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  Serial.println("--- Begin transmission ---");
}

void loop()
{
  Serial.println("Hello :)");
  delay(250);
}