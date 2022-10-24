/*
 * led_ext_button.c
 *
 *  Created on: Oct 21, 2022
 *      Author: fikrat
 */



/**********THIS IS PA0 LED BUTTON*****************************************/
#include "stm32F407xx.h"
#include "stm32fxx.gpio_driver.c"
#include <string.h>
/*int main(){

	GPIO_Handle_t Gpio_Led, GPIO_BUTTON;

	// led configuiration
	Gpio_Led.pGPIOx = GPIOA;
	Gpio_Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_8;
	Gpio_Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Gpio_Led.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	Gpio_Led.GPIO_PinConfig.GPIO_ODPType = GPIO_OUPUSHPULL;
	Gpio_Led.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;




	GPIO_PeriClockControl(GPIOA, ENABLE);


	GPIO_Init(&Gpio_Led);


	// Button LED CONFIGURATION!

	GPIO_BUTTON.pGPIOx = GPIOB;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinPuPdControl = PUL_UP;

	GPIO_PeriClockControl(GPIOB, ENABLE);


	GPIO_Init(&GPIO_BUTTON);

	uint8_t a = 0;
	bool ACKG = true;


	while(ACKG){

		if (GPIO_ReadFromInputPin(GPIOB, GPIO_PIN_NO_12) == BUTTON_PRESSED){

			delay();

			GPIO_ToggleOutputPin(GPIOA, GPIO_PIN_NO_8);

			a +=1;

			if (a == 5){

				ACKG = false;

				break;

			}

		}



	}
	GPIO_DeInit(GPIOD);



	return 0;
}*/



int main(void)
{

	GPIO_Handle_t Gpio_Led, GPIO_BUTTON;

	//Memset address
	memset(&Gpio_Led, 0, sizeof(Gpio_Led));
	//Memset address
	memset(&GPIO_BUTTON, 0, sizeof(GPIO_BUTTON));

	//this is led gpio configuration
	Gpio_Led.pGPIOx = GPIOA;


	Gpio_Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_8;
	Gpio_Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Gpio_Led.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	Gpio_Led.GPIO_PinConfig.GPIO_ODPType = GPIO_OUPUSHPULL;
	Gpio_Led.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;

	GPIO_PeriClockControl(GPIOA,ENABLE);

	//================================================




	GPIO_Init(&Gpio_Led);


	//this is btn gpio configuration


	GPIO_BUTTON.pGPIOx = GPIOB;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	GPIO_BUTTON.GPIO_PinConfig.GPIO_PinPuPdControl = PUL_UP;

	GPIO_PeriClockControl(GPIOB,ENABLE);

	GPIO_Init(&GPIO_BUTTON);


	uint8_t a = 0;

	bool ACKG = true;


	while(ACKG){

		if (GPIO_ReadFromInputPin(GPIOB,GPIO_PIN_NO_12) == BUTTON_PRESSED){

			delay();

			GPIO_ToggleOutputPin(GPIOA,GPIO_PIN_NO_8);

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


