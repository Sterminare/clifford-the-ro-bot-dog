#include <Arduino.h>
#include <ESP32Servo.h>
#include <Leg.h>

Leg::Leg(int hip_pin, int elbow_pin, int wrist_pin){
    // assign private variables
    _hip_pin = hip_pin;
    _elbow_pin = elbow_pin;
    _wrist_pin = wrist_pin;

    // set servo limits by joint (microseconds)
    int _hip_limit[] = {500, 2500};
    int _elbow_limit[] = {500, 2500};
    int _wrist_limit[] = {500, 2500};

    // set initial servo positions
    hip_value = 0;
    elbow_value = 0;
    wrist_value = 0;

    // create and attach servos
    Servo _hipServo;
    _hipServo.attach(_hip_pin, _hip_limit[0], _hip_limit[1]);
    Servo _elbowServo;
    _elbowServo.attach(_elbow_pin, _elbow_limit[0], _elbow_limit[1]);
    Servo _wristServo;
    _wristServo.attach(_wrist_pin, _wrist_limit[0], _wrist_limit[1]);
}

// center all servos
void Leg::zero(){
    _hipServo.write(90);
    hip_value = 0;
    _elbowServo.write(90);
    elbow_value = 0;
    _wristServo.write(90);
    wrist_value = 0;
}

void Leg::write(char joint, int position){
    if (abs(position) <= 90){
        if (joint == "hip"){
            hip_value = 90 + position;
        } else if (joint == "elbow"){
            wrist_value += elbow_value - 90 + position;
            elbow_value = 90 + position;
        } else if (joint == "wrist"){
            wrist_value = 90 + position;
        }
        _hipServo.write(hip_value);
        _elbowServo.write(elbow_value);
        _wristServo.write(wrist_value);
    } else {
        Serial.println("Error: Invalid position");
    }
}

void Leg::update(){
    _hipServo.write(hip_value);
    _elbowServo.write(elbow_value);
    _wristServo.write(wrist_value);
}