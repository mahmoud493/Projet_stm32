/*
 * xpt2046.h
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */#ifndef XPT2046_H
#define XPT2046_H

#include "main.h"

typedef struct {
    uint16_t x;
    uint16_t y;
    uint8_t pressed;
} TouchData;

TouchData XPT2046_GetTouch(void);

#endif
