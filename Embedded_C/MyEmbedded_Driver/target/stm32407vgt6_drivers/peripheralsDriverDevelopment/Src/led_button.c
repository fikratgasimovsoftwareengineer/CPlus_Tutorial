/*
 * led_button.c
 *
 *  Created on: Oct 19, 2022
 *      Author: fikrat
 */


/**********THIS IS PA0 LED BUTTON*****************************************/
#include "stm32F407xx.h"
#include "stm32fxx.gpio_driver.c"


int main(){

	GPIO_Handle_t Gpio_Led, GPIO_BUTTON;

	Gpio_Led.pGPIOx = GPIOA;
	Gpio_Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_8;
	Gpio_Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Gpio_Led.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	Gpio_Led.GPIO_PinConfig.GPIO_ODPType = GPIO_OUPUSHPULL;
	Gpio_Led.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;




	GPIO_PeriClockControl(GPIOD, ENABLE);


	GPIO_Init(&Gpio_Led);


	// Button LED CONFIGURATION!

	GPIO_BUTTON.pGPIOx = GPIOA;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;

	GPIO_PeriClockControl(GPIOA, ENABLE);


	GPIO_Init(&GPIO_BUTTON);

	uint8_t a = 0;
	bool ACKG = true;


	while(ACKG ){

		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == HIGH){

			delay();

			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);

			a +=1;

			if (a == 5){

				ACKG = false;

				break;

			}

		}



	}
	GPIO_DeInit(GPIOD);



	return 0;
}
