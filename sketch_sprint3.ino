#include <Servo.h>
#include <ArduinoJson.h>
#define ledR 2
#define ledY 3
#define ledG 4
#define servoPin 9
 
Servo servo1;
String status = "Ocupado";
 
void setup() {
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  servo1.attach(servoPin);
}
 
void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();
    if (comando == '0') {
      digitalWrite(ledR, HIGH);
      digitalWrite(ledY, LOW);
      digitalWrite(ledG, LOW);
      servo1.write(0);
      status = "Ocupado";
    } else if (comando == '1') {
      digitalWrite(ledR, LOW);
      digitalWrite(ledY, HIGH);
      digitalWrite(ledG, LOW);
      servo1.write(90);
      status = "Em transição";
    } else if (comando == '2') {
      digitalWrite(ledR, LOW);
      digitalWrite(ledY, LOW);
      digitalWrite(ledG, HIGH);
      servo1.write(180);
      status = "Desocupado";
    }
    StaticJsonDocument<100>json;
    json["Status"] = status;
    serializeJson(json, Serial);
    Serial.println();
   
  }
  delay(150);
 
 
}