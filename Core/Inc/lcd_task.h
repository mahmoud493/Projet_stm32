#ifndef LCD_TASK_H
#define LCD_TASK_H

#include "cmsis_os2.h"
#include "arm_math.h"   // pour float32_t
void LCD_SendSpectrum(float32_t *spectrum);
void StartLCDTask(void *argument);

#endif
