/*GPIO_PIN_NO_12
 * 001led_toggle.c
 *
 *  Created on: Oct 18, 2022
 *      Author: fikrat
 */


#include "stm32F407xx.h"
#include "stm32fxx.gpio_driver.c"






int main(void){


	GPIO_Handle_t Gpio_Led;


	Gpio_Led.pGPIOx = GPIOD;
	Gpio_Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	Gpio_Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Gpio_Led.GPIO_PinConfig.GPIO_PinSpeed = V_HIGH_SPEED;
	Gpio_Led.GPIO_PinConfig.GPIO_ODPType = GPIO_OUPUSHPULL;
	Gpio_Led.GPIO_PinConfig.GPIO_PinPuPdControl = NO_PUL_DOWN;

	GPIO_PeriClockControl(GPIOD, ENABLE);


	GPIO_Init(&Gpio_Led);

	uint8_t a = 0;
	bool ACKG = true;


	while(ACKG ){

		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		delay();
		a +=1;

		if (a == 5){
			ACKG = false;
			break;

		}



	}
	GPIO_DeInit(GPIOD);



	return 0;


}
