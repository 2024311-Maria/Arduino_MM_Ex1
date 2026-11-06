#include <Arduino.h>

#define sensLuz A0
#define ledPin 13

int valorSensLuz = 0;
int asEscuras = 650; // aumentar o tresshold pela sensibilidade d sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  valorSensLuz = analogRead(sensLuz);
  Serial.println(valorSensLuz);
  if (valorSensLuz < asEscuras) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(1);
}