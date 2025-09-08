################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.cpp 

OBJS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__generated/%.o TouchGFX/generated/images/src/__generated/%.su TouchGFX/generated/images/src/__generated/%.cyclo: ../TouchGFX/generated/images/src/__generated/%.cpp TouchGFX/generated/images/src/__generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_PWR_LDO_SUPPLY -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Drivers/STM32H7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Drivers/CMSIS/Include" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I"C:/Users/IT DOCTOR/STM32Cube/Repository/STM32Cube_FW_H7_V1.12.1/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2" -I"C:/Projet_stm32/Projet_stm32/TouchGFX/bridge" -I"C:/Projet_stm32/Projet_stm32/Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated:
	-$(RM) ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_dark_precision.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

