#include <init.h>
#include <ESP32Servo.h>

void initESP32(){
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
}

void initServos(){
    const int servo_min = 500;
    const int servo_max = 2400;

    const int leg0_0_pin = -1;
    const int leg0_1_pin = -1;
    const int leg0_2_pin = -1;

    const int leg1_0_pin = -1;
    const int leg1_1_pin = -1;
    const int leg1_2_pin = -1;

    const int leg2_0_pin = -1;
    const int leg2_1_pin = -1;
    const int leg2_2_pin = -1;

    const int leg3_0_pin = -1;
    const int leg3_1_pin = -1;
    const int leg3_2_pin = -1;

    leg0_0.attach(leg0_0_pin, servo_min, servo_max);
    leg0_1.attach(leg0_1_pin, servo_min, servo_max);
    leg0_2.attach(leg0_2_pin, servo_min, servo_max);

    leg0_0.attach(leg1_0_pin, servo_min, servo_max);
    leg0_1.attach(leg1_1_pin, servo_min, servo_max);
    leg0_2.attach(leg1_2_pin, servo_min, servo_max);

    leg0_0.attach(leg2_0_pin, servo_min, servo_max);
    leg0_1.attach(leg2_1_pin, servo_min, servo_max);
    leg0_2.attach(leg2_2_pin, servo_min, servo_max);

    leg0_0.attach(leg3_0_pin, servo_min, servo_max);
    leg0_1.attach(leg3_1_pin, servo_min, servo_max);
    leg0_2.attach(leg3_2_pin, servo_min, servo_max);
}