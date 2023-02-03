# ESP32 AudioProcessor Library 

This is a simple WIP real-time audio processor library for the ESP32. Apart of my 2nd year IOT Project I am designing an IOT Guitar Pedal & this is the fundemental
piece of Real-Time audio DSP i'm using.

``Note: This was designed using the Arduino IDE & has only optimised with it``

If you wish to use this library you must have the `DOIT ESP32 DEVKIT V1` as your board in the IDE. 
It uses `"driver/adc.h" & "driver/dac.h"`

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

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.
