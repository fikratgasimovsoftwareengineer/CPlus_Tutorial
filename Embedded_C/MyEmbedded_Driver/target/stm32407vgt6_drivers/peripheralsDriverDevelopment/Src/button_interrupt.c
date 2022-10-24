/*
 * button_interrupt.c
 *
 *  Created on: Oct 24, 2022
 *      Author: fikrat
 */



#include "stm32F407xx.h"
#include "stm32fxx.gpio_driver.c"


int main(void){



	GPIO_Handle_t gpioLed, gpioButton;


	// Memset
	memset(&gpioLed, 0, sizeof(gpioLed));
	memset(&gpioButton, 0, sizeof(gpioButton));


	// GPIO LED CONFIGURATION
	gpioLed.pGPIOx = GPIOD;
	gpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	gpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	gpioLed.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	gpioLed.GPIO_PinConfig.GPIO_ODPType = GPIO_OUPUSHPULL;
	gpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;


	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&gpioLed);




	// Button LED CONFIGURATION!

	gpioButton.pGPIOx = GPIOD;
	//button is PD 5
	gpioButton.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
	gpioButton.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IT_FT;
	gpioButton.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	gpioButton.GPIO_PinConfig.GPIO_PinPuPdControl = PUL_UP;

	GPIO_PeriClockControl(GPIOD, ENABLE);


	GPIO_Init(&gpioButton);

	// SET PRIORTY
	GPIO_PRIORITY(IRQ_NO_EXTI_5_9, NVIC_IRQ_PRI_15);

	//IRQ CONFIGURATION
	GPIO_IRQConfig(IRQ_NO_EXTI_5_9, ENABLE);



	return 0;
}


void EXTI9_5_IRQHandler(void){

	delay();

	GPIO_INTERRUPT_Handling(GPIO_PIN_NO_5);


	// toggle led
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
}
