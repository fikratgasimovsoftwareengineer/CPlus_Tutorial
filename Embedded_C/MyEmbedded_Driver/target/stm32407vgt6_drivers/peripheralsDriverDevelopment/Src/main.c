/*
 * main.c
 *
 *  Created on: Oct 21, 2022
 *      Author: fikrat
 */



/********HEADER FILES*****************/
#include "stm32F407xx.h"
#include "stm32fxx.gpio_driver.h"

int main( void ){


	void EXTI0_IRQHandler(){
		// GPIO Interrupt Handleer
		GPIO_INTERRUPT_Handling(0);

	}



	return 0;
}

void EXTI0_IRQHandler();
