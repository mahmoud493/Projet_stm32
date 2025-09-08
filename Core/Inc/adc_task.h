/*
 * adc_task.h
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */
#ifndef ADC_TASK_H
#define ADC_TASK_H

#include "main.h"
#include "cmsis_os2.h"

#define ADC_BUFFER_SIZE 2048  // double buffer (2 x 1024 samples)

extern uint16_t adc_buffer[ADC_BUFFER_SIZE];
extern osThreadId_t TaskADCHandle;

void StartADCTask(void *argument);

#endif
