# ESP32 AudioProcessor Library 

## Description

This is a simple WIP real-time audio processor library for the ESP32. Apart of my 2nd year IOT Project, designing an IOT Guitar Pedal.
This is the fundemental piece of Real-Time audio DSP i'm using.

``Note: This was designed using the Arduino IDE & has only optimised with it specifically in mind``

If you wish to use this library you must have the `DOIT ESP32 DEVKIT V1` as your board in the IDE. 
It uses `"driver/adc.h" & "driver/dac.h"` from the ESP32 Drivers

>It is a 12 bit real time audio processor taking in the RAW values of an auido input. <br>
The fixed volume in `esp_Audio_Process.cpp` is `**128**` the max is `**255**`.
Adjust this in accordance to the volume of the audio in.   

## Setup
>On the ESP32
>>###### Note that the ESP32 ADC max Vin is 3.3V

``Connect Audio in (Positive)`` to __ADC Pin 0 (Pin VP)__  <br>
``Connect Audio in (Negeative)`` to __Ground Pin__ 

``Connect Audio out (Positive)`` to __DAC Pin 1 (Pin 25)__  <br>
``Connect Audio out (Negeative)`` to __Ground Pin__ 


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

## Roadmap
>Make Audio In/Out Relativley clear
>Add a LP & HP filter
>Make a circular buffer delay & reverb 

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.
