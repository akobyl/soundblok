#include "wavemaker.h"

int main(void) {
    int x = 0;
    while(x == 0);

    waveProperties_t test_wave = {
        .amplitude = 10,
        .center = 100,
        .frequency = 100,
        .type = WAVE_SAWTOOTH,
        .sample_rate = 10000,
    };

    uint32_t buffer[100];
    uint32_t wave_length = 0;

    generateSawtoothWave(buffer, 100, &test_wave, &wave_length);
}