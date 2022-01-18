#ifndef __Remote_h__
#define __Remote_h__

#include <Arduino.h>

class Remote{
    public:
        int channel_val[] = {-1, -1, -1, -1, -1, -1};
        int receive();
    private:
        int _channel_pin[6];
};

#endif