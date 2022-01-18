#ifndef __Leg_h__
#define __Leg_h__

class Leg{
public:
    Leg(int hip_pin, int elbow_pin, int wrist_pin);
    int info();
private:
    int _hip_pin;
    int _elbow_pin;
    int _wrist_pin;
};

#endif