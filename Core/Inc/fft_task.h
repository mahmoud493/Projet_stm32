#ifndef FFT_TASK_H
#define FFT_TASK_H

#include "arm_math.h"
#include "cmsis_os2.h"

#define FFT_SIZE 1024
#define FFT_OUTPUT_SIZE (FFT_SIZE/2)

extern float32_t fft_input[FFT_SIZE];
extern float32_t fft_output[FFT_OUTPUT_SIZE];

void FFT_ProcessBuffer(uint16_t *adc_data);
void StartFFTTask(void *argument);

#endif

