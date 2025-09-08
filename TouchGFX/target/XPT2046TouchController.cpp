/*
 * XPT2046TouchController.cpp
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */
#include "XPT2046TouchController.hpp"
XPT2046TouchController::XPT2046TouchController()
    : lastX(0), lastY(0), lastPressed(false)
{
}

void XPT2046TouchController::init()
{
    // Init hardware si besoin (SPI déjà configuré ailleurs)
}

bool XPT2046TouchController::sampleTouch(int32_t& x, int32_t& y)
{
    if (lastPressed)
    {
        x = lastX;
        y = lastY;
        return true;
    }
    return false;
}

void XPT2046TouchController::setTouchSample(int32_t x, int32_t y, bool pressed)
{
    lastX = x;
    lastY = y;
    lastPressed = pressed;
}




