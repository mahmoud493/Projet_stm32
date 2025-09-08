/*
 * tgfx_bridge.cpp
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */

#include <gui/model/Model.hpp>
#include "STM32TouchController.hpp"

extern Model model;
extern STM32TouchController touchController;  // déclaré globalement dans BoardConfiguration.cpp

void TouchGFX_PushSpectrum(const float* data, int length)
{
    model.newSpectrumData(data, length);
}

void TouchGFX_PushTouch(uint16_t x, uint16_t y, uint8_t pressed)
{
    touchController.setTouchSample(x, y, pressed != 0);
}
