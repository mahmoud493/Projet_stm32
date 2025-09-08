/*
 * XPT2046TouchController.hpp
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */

#ifndef XPT2046TOUCHCONTROLLER_HPP
#define XPT2046TOUCHCONTROLLER_HPP

#include <touchgfx/hal/Types.hpp>
#include "STM32TouchController.hpp"

/**
 * @brief Classe TouchController pour XPT2046
 */
class XPT2046TouchController : public touchgfx::TouchController
{
public:
    XPT2046TouchController();

    virtual void init() override;
    virtual bool sampleTouch(int32_t& x, int32_t& y) override;

    void setTouchSample(int32_t x, int32_t y, bool pressed);

private:
    volatile int32_t lastX;
    volatile int32_t lastY;
    volatile bool lastPressed;
};

#endif // XPT2046TOUCHCONTROLLER_HPP
