#include <Arduino.h>
#include <stdio.h>

int lectura;

void setup() {
  pinMode(SCL, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura = analogRead(4);
  Serial.println(lectura);
  delay(100);

  if (lectura < 2000){
    digitalWrite(SCL, HIGH);  
  } else if (lectura >= 1000)
  {
    digitalWrite(SCL, LOW);
  }
}

