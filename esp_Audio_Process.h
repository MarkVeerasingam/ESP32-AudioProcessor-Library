#ifndef ESP_AUDIO_PROCESS_H
#define ESP_AUDIO_PROCESS_H

#include "driver/adc.h"
#include "driver/dac.h"

class AudioProcess {
  public:
    AudioProcess();
    void prepareAudio();
    void playAudio();
    void setVolume(int volume);
  private:
    const adc1_channel_t adcChannel = ADC1_CHANNEL_0;
    const dac_channel_t dacChannel = DAC_CHANNEL_1;
    int _volume;
};

#endif
