#include "esp_Audio_process.h"

AudioProcess::AudioProcess() {
  _volume = 128;
}

void AudioProcess::prepareAudio() {
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(adcChannel, ADC_ATTEN_DB_11);
  dac_output_enable(dacChannel);
}

void AudioProcess::playAudio() {
  int val = adc1_get_raw(adcChannel);
  val = val * _volume / 255;
  dac_output_voltage(dacChannel, val);
}

void AudioProcess::setVolume(int volume) {
  _volume = volume;
}
