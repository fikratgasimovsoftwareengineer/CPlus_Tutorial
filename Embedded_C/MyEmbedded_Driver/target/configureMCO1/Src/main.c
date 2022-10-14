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

// ================Base Address=============
#define RCC_BASE_ADDR 		0x40023800UL
#define GPIOA_BASE_ADDR		0x40020000UL

// ====================Offset===================

#define RCC_CFGR_OFFSET		0x08UL
#define GPIOA_OFFSET		0x00
#define GPIOA_AFRH			0x24

// ==================Full Address==============
#define RCC_CLOCK_CONFIGURATION		0x40023808UL

// enable clock rcc for gpioa
#define RCC_CLOCK_ENABLE_GPIOA		0x40023830UL

#define GPIOA_FULL_ADDRESS			0x40020000UL

#define GPIOA_FULL_ALTERNATE		0x40020024UL
int main(void)
{
    uint32_t *pPTRCFR = (uint32_t*) RCC_CLOCK_CONFIGURATION;

    uint32_t *pRCCGPIOA = (uint32_t*) RCC_CLOCK_ENABLE_GPIOA;
    uint32_t *pGPIOA_ALTERNATE = (uint32_t*) GPIOA_FULL_ALTERNATE;

    *pPTRCFR &= ~(0x3 << 21); // or *pPTRCFR |= (0 << 21);
    *pPTRCFR |= (1 << 25);
    *pPTRCFR |= (1 << 26);


    // 1. Enable GPIOA port
    *pRCCGPIOA |= (1 << 0);

    // 2. Configure mode of GPIOA 8 pin as alternate function
    *pRCCGPIOA &= ~(3 << 16); //To write (clear) 00
    *pRCCGPIOA |= (2 << 16); // to write (alternate function mode [1:0])

    //c)Configure ALtternate function register	to set mode 0 as PA8
    *pGPIOA_ALTERNATE &= ~(0xf << 0);

    for(;;);




}
