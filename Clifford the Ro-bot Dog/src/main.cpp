#include <Arduino.h>
#include <ESP32Servo.h>
#include <Leg.h>
// #include <init.h>

Leg frontLeft(-1, -1, -1); // 0
Leg frontRight(-1, -1, -1); // 1
Leg rearLeft(-1, -1, -1); // 2
Leg rearRight(-1, -1, -1); // 3


void setup() {
  //initESP32();
  frontLeft.zero();
  frontRight.zero();
  rearLeft.zero();
  rearRight.zero();
}

void loop() {
}