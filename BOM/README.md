# this BOM is likely to change frequently, and contains no links to purchase specific parts, but instead a description and images. you will have to source the parts yourself.
### there is no guarantee that any parts here will be used forever, some parts may become obsolete and end up unused in the future, or that the list is even complete. **Don't purchase anything this early if you're not willing to accept that risk...**
### I recommend buying a kit/assortment of the hardware needed as the screw length and quantity may change.

## Hardware

- M3 threaded inserts (long or short variant, long reccomended) qty >125

- M3 socket head screws (many 8mm, some 10-20mm) used throughout design for securing servos, chassis parts together, etc.

- M3 countersink head screws (20mm qty 4, several <10mm) used to secure legs to servos, attach upper leg to lower leg, etc.

- M3 hex nut (approx qty 8) used to attach upper leg to lower leg.

- M4 countersink head screws (15-20mm approx qty 16) used for linkage hinges.

- M4 hex nut (approx qty 16) used for linkage hinges.

## Electronics

- qty 12 mg996r servos or compatible. I used cheap (4 for $20) clone servos and they are strong enough, but if you have the budget I reccomend good quality 20kg servos.

- ESP32 microcontroller or compatible. It must have at least 12 PWM output for driving servos, and enough extra GPIO to receive remote control communication (for flysky transmitter, this is 6 ADC.) Alternatively, a lower-cost microcontroller with fewer pins could be used in combination with a PCA9685 or similar servo controller but I have had bad luck with these. Additionally, the transmitter + receiver can be omitted if you would like to use instead the wifi/bluetooth connectivity of the ESP32, but I prefer a transmitter.

- flysky 6+ channel transmitter and receiver. 

- lipo battery, BMS, voltage regulation (if required). 

- (optional but reccomended:) 5A+ power supply for testing/development.
