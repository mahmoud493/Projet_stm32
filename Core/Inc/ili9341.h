/*
 * ili9341.h
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */

#ifndef ILI9341_H
#define ILI9341_H

#include "arm_math.h"   // apporte float32_t

void ILI9341_Init(void);
void ILI9341_DrawSpectrum(float32_t *data, int length);

#endif
