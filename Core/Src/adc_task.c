/*
 * adc_task.c
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */
#include "adc_task.h"
#include "fft_task.h"
#include "adc.h"          // pour hadc1
#include "cmsis_os.h"     // API CMSIS-RTOS
#include "FreeRTOS.h"     // définitions internes (pdTRUE, pdFALSE, portMAX_DELAY, BaseType_t)
#include "task.h"         // ulTaskNotifyTake, vTaskNotifyGiveFromISR, portYIELD_FROM_ISR

uint16_t adc_buffer[ADC_BUFFER_SIZE];
osThreadId_t TaskADCHandle;

void StartADCTask(void *argument)
{
    // Lancement ADC DMA circulaire
    HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buffer, ADC_BUFFER_SIZE);

    for(;;)
    {
        ulTaskNotifyTake(pdTRUE, portMAX_DELAY); // attente notification DMA
        FFT_ProcessBuffer(adc_buffer);           // envoi à TaskFFT
    }
}

// Callback DMA
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;
    vTaskNotifyGiveFromISR(TaskADCHandle, &xHigherPriorityTaskWoken);
    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}
