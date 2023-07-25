#include "FreeRTOS.h"
#include "queue.h"
#include "wavemaker.h"

int main(void) {
  int x = 0;

  // QueueHandle_t queue = xQueueCreate(10, sizeof(uint32_t));
  int y = configCPU_CLOCK_HZ;
  while (x == 0)
    ;

  waveProperties_t test_wave = {
      .amplitude = 10,
      .center = 100,
      .frequency = y,
      .type = WAVE_SAWTOOTH,
      .sample_rate = 10000,
  };

  uint32_t buffer[100];
  uint32_t wave_length = 0;

  generateSawtoothWave(buffer, 100, &test_wave, &wave_length);
}

void vApplicationMallocFailedHook() {}
