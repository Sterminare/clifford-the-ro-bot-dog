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
    _elbowServo.write(90);
    _wristServo.write(90);
}

void Leg::write(char joint, int position){

}