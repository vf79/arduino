#include "max6675.h"

#define pinSO  8   //Pino digital (SO)
#define pinCS  9   //Pino digital (CS)
#define pinCLK 10  //Pino digital (CLK/SCK)

MAX6675 sensorTemp (pinCLK, pinCS, pinSO);

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  Serial.print(sensorTemp.readCelsius());
  Serial.println("C");
  delay(500);
}
