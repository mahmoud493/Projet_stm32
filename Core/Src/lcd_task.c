/*
 * lcd_task.c
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */
#include "lcd_task.h"
#include "ili9341.h"
#include "fft_task.h"
#include "tgfx_bridge.hpp" // via un include path vers TouchGFX/bridge
#define LCD_QUEUE_LENGTH 2


extern osMessageQueueId_t lcdQueueHandle;

void LCD_SendSpectrum(float32_t *spectrum)
{
    // copie dans buffer statique (évite pointeurs volatiles)
    static float32_t spectrum_buffer[LCD_QUEUE_LENGTH][FFT_OUTPUT_SIZE];
    static uint8_t idx = 0;

    memcpy(spectrum_buffer[idx], spectrum, sizeof(float32_t) * FFT_OUTPUT_SIZE);
    osMessageQueuePut(lcdQueueHandle, &spectrum_buffer[idx], 0, 0);

    idx = (idx + 1) % LCD_QUEUE_LENGTH;
}

void StartLCDTask(void *argument)
{
    float32_t *received;

    lcdQueueHandle = osMessageQueueNew(LCD_QUEUE_LENGTH, sizeof(float32_t*), NULL);

    for(;;) {
        if (osMessageQueueGet(lcdQueueHandle, &received, NULL, osWaitForever) == osOK) {
            // Pousse vers TouchGFX (copie interne côté C++)
             TouchGFX_UpdateSpectrum(received, FFT_OUTPUT_SIZE);
        }
    }
}
