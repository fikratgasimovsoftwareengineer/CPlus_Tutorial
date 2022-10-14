/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


#define RCC_BASE_ADDR		0x40023800UL
#define RCC_CCR				0x00

int main(void)
{

	uint32_t* pRCC_CCR = (uint32_t*)RCC_BASE_ADDR;


	//===============RCC Clock Control Register ==========
	//1. Enbale HSE CLOCK using HSEON BIT (RCC_CR)

	pRCC_CCR |= (1 << 16);



	//2. Wait Until HSE Clock from the external crystal stablizies
	//3.switch the system clock to HSE(RCC_CFGR)
	//4. DO MCO1 Setting to measure it






    /* Loop forever */
	for(;;);
}
