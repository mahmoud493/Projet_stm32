/*
 * ili9341.c
 *
 *  Created on: Sep 7, 2025
 *      Author: IT DOCTOR
 */

#include "ili9341.h"
#include "main.h"


// Exemple simplifié
void ILI9341_Init(void)
{
    // Init SPI / GPIO selon CubeMX
}

void ILI9341_DrawSpectrum(float32_t *data, int length)
{  for (int i = 0; i < length; i++)
{
    // Exemple simple : convertir la valeur en hauteur de barre
    int value = (int)(data[i] * 100);  // mise à l’échelle
    if (value < 0) value = 0;
    if (value > 240) value = 240;

    // Ici tu dessines une barre verticale sur ton LCD
    // Exemple : ILI9341_DrawLine(i, 240, i, 240 - value, COLOR_GREEN);
}
}



