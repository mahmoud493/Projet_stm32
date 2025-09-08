/*
 * fft_task.c
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */
#include "fft_task.h"
#include "lcd_task.h"

float32_t fft_input[FFT_SIZE];
float32_t fft_output[FFT_OUTPUT_SIZE];

static arm_rfft_fast_instance_f32 S;

void FFT_ProcessBuffer(uint16_t *adc_data)
{
    for (int i = 0; i < FFT_SIZE; i++) {
        fft_input[i] = ((float32_t)adc_data[i] - 2048.0f); // centrage signal
    }

    static float32_t fft_temp[FFT_SIZE];
    arm_rfft_fast_f32(&S, fft_input, fft_temp, 0);
    arm_cmplx_mag_f32(fft_temp, fft_output, FFT_SIZE/2);

    // Envoi du spectre à TaskLCD via queue
    LCD_SendSpectrum(fft_output);
}

void StartFFTTask(void *argument)
{
    arm_rfft_fast_init_f32(&S, FFT_SIZE);
    for(;;) {
        osDelay(1); // la logique principale est dans FFT_ProcessBuffer()
    }
}
