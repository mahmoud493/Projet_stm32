/*
 * tgfx_bridge.hpp
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */
#pragma once
//#include <cstdint>
#include "arm_math.h"   // pour float32_t
#ifdef __cplusplus
extern "C" {
#endif

void TouchGFX_UpdateSpectrum(const float* data, int length);
void TouchGFX_PushTouch(uint16_t x, uint16_t y, uint8_t pressed);

#ifdef __cplusplus
}
#endif
