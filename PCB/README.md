# PCB files are incomplete and untested.
in it's current iteration, the PCB is not very useful unless you're using the bluetooth/wifi communication for remote control. If you intend to use a transmitter, you may not find the PCB very helpful.

## Features of PCB:
- Removeable microcontroller (ESP32)
- connectivity and power distribution for the 12 servos and microcontroller. Servos are powered from Vin, ESP32 and sensors through 5V voltage regulator.
- voltage divider for reading battery voltage

## Todo:
- connectivity for 6+ channel receiver
- connectivity for IMU (optional)
- I2C connectivity for other accessories/sensors
