/*
 * it.c
 *
 *  Created on: 21/09/2021
 *      Author: Mücagit
 */

#include "main.h"

void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}



