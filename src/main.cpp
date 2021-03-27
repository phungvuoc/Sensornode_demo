#include <Arduino.h>
#include "ascii-table.h"

unsigned char buffer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    buffer = (char) Serial.read();
    delay(500);
    if (buffer == NUMBER_1){
      Serial.printf("Hello 1\n");
    } else if (buffer == NUMBER_2)
    {
      Serial.printf("Hello 2\n");
    } else
    {
      Serial.printf("Error\n");
    }
  }
  delay(1000);
  //ad comment to learn git
}
