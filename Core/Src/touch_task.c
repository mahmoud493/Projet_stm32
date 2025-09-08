/*
 * touch_task.c
 *
 *  Created on: Sep 4, 2025
 *      Author: IT DOCTOR
 */
#include "touch_task.h"
#include "xpt2046.h"
#include "tgfx_bridge.hpp"
void StartTouchTask(void *argument)
{
	 for(;;) {
	        TouchData td = XPT2046_GetTouch();
	        TouchGFX_PushTouch(td.x, td.y, td.pressed);
	        osDelay(15);

    }
}





