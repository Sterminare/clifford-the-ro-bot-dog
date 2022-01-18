#include <Arduino.h>
#include <Remote.h>

Remote::Remote(int channel_val){
    for (int i=0; i<6; i++){
     pinMode(channel_val[i], INPUT);   
    }
};

int receive(){
    int values[] = {-1, -1, -1, -1, -1, -1};
    for (int i=0; i<6; i++){
        values[i] = map(analogRead(this->_channel_pin[i], 0, 4095, -90, 90));
    }
    return values;
}