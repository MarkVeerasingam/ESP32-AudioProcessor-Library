# ESP32 AudioProcessor Library 

``
Last Updated: 3/2/23
``

## About

This is a simple WIP real-time audio processor library for the ESP32. Apart of my 2nd year IOT Project, designing an IOT Guitar Pedal.
This is the fundemental piece of Real-Time audio DSP i'm using.

``Note: This was designed using the Arduino IDE & has only been optimised with it specifically in mind``


If you wish to use this library you must download the `DOIT ESP32 DEVKIT V1` as your board in the IDE. 
As it uses `"driver/adc.h" & "driver/dac.h"` from the ESP32 Drivers
>DEVKIT can be found [here](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)

## Description

This is a 12 bit real time audio processor taking in the RAW values of an auido input. <br>
The fixed volume in `esp_Audio_Process.cpp` is **128**. The max value is **255**.
Adjust this in accordance to the volume of the audio in.   

## Setup
__On the ESP32__
>###### Note that the ESP32 ADC max Vin is 3.3V

``Connect Audio in (Positive)`` to __ADC Pin 0 (Pin VP)__  <br>
``Connect Audio in (Negeative)`` to __Ground Pin__ 

``Connect Audio out (Positive)`` to __DAC Pin 1 (Pin 25)__  <br>
``Connect Audio out (Negeative)`` to __Ground Pin__ 

__On the Arduino IDE__

``
Download the ZIP or Clone to the Arduino Library Folder
``

## Usage

```
#include <esp_Audio_Process.h>

AudioProcess processaudio;

void setup() {
  processaudio.prepareAudio();
}

void loop() {
  processaudio.playAudio();
}
```
## References
ESP32 library for Arduino: https://github.com/espressif/arduino-esp32 <br>
Analog to Digital Converter - ESP32 (espressif): https://docs.espressif.com/projects/esp-idf/en/v4.2/esp32/api-reference/peripherals/adc.html#:~:text=The%20ESP32%20integrates%20two%2012,15%20and%2025%20%2D%2027 <br>

## Roadmap
>Make Audio In/Out Relativley clear <br>
>>implement I2S
>Add a LP & HP filter <br>
>Make a circular buffer delay & reverb <br>

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.
