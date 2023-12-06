#include <Arduino.h>

unsigned long previousMillis;
unsigned long interval = 60000;

void reset();

void setup() {
  Serial.begin(115200);
  Serial.println("Inicio del programa");
  previousMillis = millis();
}

void loop() {
  reset();
}

void reset() {
  if ((millis() - previousMillis) > interval)
  {
    Serial.println("Reinicio!!!");
    ESP.restart();
    previousMillis = millis();
  }
}