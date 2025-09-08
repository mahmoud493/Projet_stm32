/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * This file was created by TouchGFX Generator 4.24.0. This file is only
  * generated once! Delete this file from your project and re-generate code
  * using STM32CubeMX or change this file manually to update it.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* USER CODE BEGIN STM32TouchController */

#include "STM32TouchController.hpp"


STM32TouchController::STM32TouchController()
    : lastX(0), lastY(0), lastPressed(false)
{
}

void STM32TouchController::init()
{
    // Rien de spécial ici : SPI/IRQ tactile déjà initialisé dans CubeMX
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
    if (lastPressed)
    {
        x = lastX;
        y = lastY;
        return true;
    }
    return false;
}

void STM32TouchController::setTouchSample(int32_t x, int32_t y, bool pressed)
{
    lastX = x;
    lastY = y;
    lastPressed = pressed;
}
