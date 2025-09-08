Projet_stm32
📌 Overview

This project is built on the STM32H723 microcontroller and demonstrates the integration of multiple embedded technologies:

🎨 TouchGFX framework for an advanced graphical user interface (GUI).

📺 ILI9341 LCD driver to display graphics and real-time data.

👆 XPT2046 touch controller to enable touch screen interaction.

📊 CMSIS-DSP library for real-time signal processing and spectrum visualization.

⚙️ FreeRTOS for multitasking and scheduling.

The aim is to build a performant embedded system combining graphics, touch interaction, and DSP features on STM32 hardware.

🛠️ Features

Real-time spectrum analysis and visualization using CMSIS-DSP.

Smooth graphical interface designed with TouchGFX.

Touch screen support through XPT2046 controller.

Task-based architecture using FreeRTOS.

Optimized for STM32H723 MCU (Cortex-M7).

📂 Project Structure
Projet_stm32/
│── Core/           # STM32 application source code
│── Drivers/        # HAL drivers
│── Middlewares/    # CMSIS-DSP, FreeRTOS, TouchGFX
│── TouchGFX/       # GUI assets, generated code, and application logic
│── STM32H723VGTX_FLASH.ld   # Linker script
│── README.md       # Project documentation

⚡ Requirements

Hardware:

STM32H723-based board

ILI9341 LCD display

XPT2046 touch controller

Software:

STM32CubeIDE

TouchGFX Designer

STM32CubeMX

ARM CMSIS-DSP library

🚀 Getting Started

Clone the repository:

git clone https://github.com/mahmoud493/Projet_stm32.git
cd Projet_stm32


Open the project in STM32CubeIDE.

Build and flash the project to your STM32 board.

Connect the LCD + Touch controller and test the GUI and DSP spectrum features.

📸 Screenshots (Optional)

👉 You can add photos of your LCD running the project here.

📜 License

This project is distributed under the MIT License.
