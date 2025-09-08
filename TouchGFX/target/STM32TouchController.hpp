/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : STM32TouchController.hpp
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

#ifndef STM32TOUCHCONTROLLER_HPP
#define STM32TOUCHCONTROLLER_HPP

#include <platform/driver/touch/TouchController.hpp>

class STM32TouchController : public touchgfx::TouchController
{
public:
    STM32TouchController();

    virtual void init() override;
    virtual bool sampleTouch(int32_t& x, int32_t& y) override;

    // 🚀 Fonction pour que FreeRTOS ou tgfx_bridge pousse les coordonnées
    void setTouchSample(int32_t x, int32_t y, bool pressed);

private:
    volatile int32_t lastX;
    volatile int32_t lastY;
    volatile bool lastPressed;
};

#endif // STM32TOUCHCONTROLLER_HPP
