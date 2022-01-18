#ifndef __Leg_h__
#define __Leg_h__

#include <Arduino.h>
#include <ESP32Servo.h>

class Leg{
    public:
        Leg(int hip_pin, int elbow_pin, int wrist_pin);
        void zero();
        void write(char joint, int position);
    private:
        int _hip_pin;
        Servo _hipServo;
        int _elbow_pin;
        Servo _elbowServo;
        int _wrist_pin;
        Servo _wristServo;
};

#endif