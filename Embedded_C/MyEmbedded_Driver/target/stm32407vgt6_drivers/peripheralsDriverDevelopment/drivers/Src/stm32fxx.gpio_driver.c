/*
 * stm32fxx.gpio_driver.c
 *
 *  Created on: Oct 17, 2022
 *      Author: FIKRAT GASIMOV (EMBEDDED SOFTWARE DEVELOPER)
 */
#include "stm32fxx.gpio_driver.h"



/***************************************************************
 * 					API SUPPORTED BY THIS DRIVER
 * 			FOR MORE INFORMATION ABOUT APIs CHECK FUNCTION DETALS
 * 			*****************************************************
 * 			HERE IMPLEMENTATIONS OF GPIO DRIVER APIs are represented!
 *
 * ***************************************************************/

/*
 * Peripheral Clock SetUp
 * */

/*****************************************************************
 * @fn				- GPIO_PeriClockControl
 *
 * @brief			- This function enables/disables peripheral clock for given GPIO PORT
 *
 * @param[in]			- base address of gpio peripheral
 * @param[in]			- ENABLE OR DISABLE MACROS
 *
 * @return			- none
 * @Note			- none
 * */

void GPIO_PeriClockControl(GPIO_RefDef_t *pGPIOx, uint8_t EnorDi)
{

	if (EnorDi == ENABLE){

		if (pGPIOx == GPIOA){

			GPIOA_PCLK_EN();

		}else if(pGPIOx == GPIOB){
			GPIOB_PCLK_EN();

		}else if(pGPIOx == GPIOC){

			GPIOC_PCLK_EN();
		}else if(pGPIOx == GPIOD){

			GPIOD_PCLK_EN();

		}else if(pGPIOx == GPIOE){

			GPIOE_PCLK_EN();

		}else if(pGPIOx == GPIOF){

			GPIOF_PCLK_EN();


		}else if(pGPIOx == GPIOG){

			GPIOG_PCLK_EN();


		}else if(pGPIOx == GPIOH){

			GPIOH_PCLK_EN();


		}else if(pGPIOx == GPIOI){

			GPIOI_PCLK_EN();


		}
	} // Main if end!

	else{






	} // Else finished!



} //GPIO RCC Enable Finished

/*
 * GPIO Init
 * */

/*
 * Peripheral Clock SetUp
 * */

/*****************************************************************
 * @fn				- GPIO_Init
 *
 * @brief			- THis function initialize GPIO PIn
 *
 * @param[in]			- base address of gpio peripheral and gpio pin configuration

 *
 * @return			- none
 * @Note			- none
 * */
void GPIO_Init(GPIO_Handle_t *pGPIO_Handle){

	uint32_t temp = 0;
    //1 .GPIO Initialize PinNumber

	if (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode <= GPIO_MODE_ALG){

		// SET 0 TO EVERY PIN
		temp = (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode << ( 2 * pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber));

		// First Clear
		pGPIO_Handle->pGPIOx->MODER &= ~( 3 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber);

		//Reset
		pGPIO_Handle->pGPIOx->MODER |= temp;


	}else{
			/*======Interrupt Handling Section=============*/


		if (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_FT){


			// 1. Configure Falling Edge ENABLE
			EXTI->FTSR |=  (1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );


			//Clear Corresponding RTSR Bit DISABLE
			EXTI->RTSR &=  ~(1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );


		}else if (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_RT){


			// 2. Configure Rising Edge ENABLE
			EXTI->RTSR |=  (1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );


			//Clear Corresponding Falling Edge DISABLE
			EXTI->FTSR &=  ~(1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );

		}else if (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_IT_RF){

 		    // 3. Configure Rising Edge ENABLE
			EXTI->RTSR |=  (1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );


			//Clear Corresponding Falling Edge ENABLE
			EXTI->FTSR |=  (1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber );


		}

		// after else if, configure GPIO Port Selection in SYSCFG_EXTICR
		uint8_t exti_num =  (pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber / 4);

		// identify bits
		uint8_t exti_bit = (pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber % 4 ) * 4;

		// identify port number
		uint8_t parcode = GPIO_BASEADDR_TOCODE(pGPIO_Handle->pGPIOx);

		// Enable the clock FOR SYSCFG
		SYSCFG_PCLK_EN();

		// read starter bit and
		SYSCFG->EXTICR[exti_num] = parcode << exti_bit;


		// 4. ENABLE INTERUPT MASK REGISTER
		EXTI->IMR |=  (1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber);





	}
	//After GPIO Initialization: Follow these Steps
	temp = 0;


	//2. GPIO Configure PinSpeed;
	//LOW SPEED
	temp = (pGPIO_Handle->GPIO_PinConfig.GPIO_PinSpeed << (2 * pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber));
	//Clear
	pGPIO_Handle->pGPIOx->OSPEEDR &= ~(3 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber);
	//Reset
	pGPIO_Handle->pGPIOx->OSPEEDR |= temp;
	temp = 0;





	//3. Configure GPIO PinPuPdControl;
	//NO PULL UP AND NO PULL DOWN
	temp = (pGPIO_Handle->GPIO_PinConfig.GPIO_PinPuPdControl << (2* pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber));
	//Clearning
	pGPIO_Handle->pGPIOx->PUPDR &= ~(3 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber);
	//Reset
	pGPIO_Handle->pGPIOx->PUPDR |= temp;
	temp = 0;



	//4. Configure GPIO OTYPEype;
	//Output push-pull (reset state)
	temp = (pGPIO_Handle->GPIO_PinConfig.GPIO_ODPType << (1 * pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber));
	//Clearing
	pGPIO_Handle->pGPIOx->OTYPER &= ~(1 << pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber);
	//Reset
	pGPIO_Handle->pGPIOx->OTYPER |= temp;
	temp = 0;

	//5. Configure GPIO PinAltFunMode;
	if (pGPIO_Handle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_ALTR){

		uint8_t temp, temp2;
		//Find If Pin belongs to AFR high or lower power
		temp =pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber / 8;
		// Find AFR Bit POsition
		temp2 = pGPIO_Handle->GPIO_PinConfig.GPIO_PinNumber % 8;

		//Clearning
		pGPIO_Handle->pGPIOx->AFR[temp] &= ~(0xF << (4 * temp2) );

								  //Reset
		pGPIO_Handle->pGPIOx->AFR[temp] |= (pGPIO_Handle->GPIO_PinConfig.GPIO_PinAltFunMode << (4 * temp2));

	}

}


/*****************************************************************
 * @fn				- GPIO_DeInit
 *
 * @brief			- THis function Reset GPIO PIn
 *
 * @param[in]		- base address of gpio peripheral and gpio pin configuration

 *
 * @return			- none
 * @Note			- none
 * */

//Reset with RCC reset peripheral
void GPIO_DeInit(GPIO_RefDef_t *pGPIOx){



	if (pGPIOx == GPIOA){

		GPIOA_REG_RESET();

	}else if(pGPIOx == GPIOB){

		GPIOB_REG_RESET();

	}else if(pGPIOx == GPIOC){

		GPIOC_REG_RESET();

	}else if(pGPIOx == GPIOD){

		GPIOD_REG_RESET();

	}else if(pGPIOx == GPIOE){

		GPIOE_REG_RESET();

	}else if(pGPIOx == GPIOF){

		GPIOF_REG_RESET();


	}else if(pGPIOx == GPIOG){

		GPIOG_REG_RESET();


	}else if(pGPIOx == GPIOH){

		GPIOH_REG_RESET();


	}else if(pGPIOx == GPIOI){

		GPIOI_REG_RESET();

	}


}




/*
 * GPIO Read and Write
 * */

/************************************************
 * @fn				- GPIO_ReadFromInputPin
 * @brief			- Reading from GPIO Input Pin
 *
 * @param[in]		- base address of gpio
 * @param[in]		- pin number to write on
 *
 *@return			- Return 0 or 1
 *@Note				- None
 * **********************************************/
//Getter for GPIO
uint8_t GPIO_ReadFromInputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber){

	uint8_t value;

	//value = (uint8_t)(( pGPIOx->IDR << PinNumber) & 0x00000001);
	value = (uint8_t )((pGPIOx->IDR  << PinNumber) & 0x00000001 ) ;

	return value;

}



/************************************************
 * @fn				- GPIO_ReadFromInputPort
 * @brief			- Reading from GPIO Input Port
 *
 * @param[in]		- base address of gpio
 *
 *@return			- Return 16 bits: 0 or 1
 *@Note				- None
 * **********************************************/
uint16_t GPIO_ReadFromInputPort(GPIO_RefDef_t *pGPIOx){

	uint16_t value;

	value = pGPIOx->IDR;

	return value;


}
/************************************************
 * @fn				- GPIO_WriteToOutputPin
 * @brief			- Writing to GPIO Input Pin
 *
 * @param[in]		- base address of gpio
 * @param[in]		- Pin Number
 * @param[in]		- Value
 *
 *@return			- None
 *@Note				- None
 * **********************************************/
//Setter for GPIO
void GPIO_WriteToOutputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value){


	if (Value == GPIO_PIN_SET){

		// write 1 to output data register corresponding pin
		pGPIOx->ODR |= (1 << PinNumber);


	}else{

		pGPIOx->ODR &= ~(1 << PinNumber);
	}



}

/************************************************
 * @fn				- GPIO_WriteToOutputPort
 * @brief			- Writing to GPIO Input Port
 *
 * @param[in]		- base address of gpio
 * @param[in]		- Value
 *
 *@return			- None
 *@Note				- None
 * **********************************************/

void GPIO_WriteToOutputPort(GPIO_RefDef_t *pGPIOx, uint16_t Value){

	pGPIOx->ODR = Value;


}

/************************************************
 * @fn				- GPIO_ToggleOutputPin
 * @brief			- Toggling with GPIO output Port
 *
 * @param[in]		- base address of gpio
 * @param[in]		- PinNumber
 *
 * @return			- None
 * @Note			- None
 * **********************************************/


void GPIO_ToggleOutputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber){

	pGPIOx->ODR ^= (1 << PinNumber);


}


/************************************************
 * @fn				- GPIO_IRQConfig
 * @brief			- RQ Configuration and ISR Handling
 *
 * @param[in]		- IRQ Number
 * @param[in]		- IRQ Priority
 * @param[in]		- Enable or Disable
 *
 * @return			- None
 * @Note			- None
 * **********************************************/
/*
 * IRQ Configuration and ISR Handling
 * */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t EnorDi){

	// if enables bit
	if (EnorDi==ENABLE){


		if (IRQNumber <= 31){

			// NVIC-ICER[0] deference

			*NVIC_ISER0 |= (1 << IRQNumber);

		}else if(IRQNumber >= 32 && IRQNumber <= 63){


			// NVIC-ISER[1] deference
			*NVIC_ISER1 |= (1 << (IRQNumber % 32) );

		}else if(IRQNumber >= 64 && IRQNumber <= 96){

			// NVIC-ISER[2] deference pointer
			*NVIC_ISER2 |= (1 << (IRQNumber % 64));

		}


	}else {

		if (IRQNumber <= 31){
					// NVIC-ICER[0]
			*NVIC_ICER0 |= (1 << IRQNumber);


		}else if(IRQNumber >= 32 && IRQNumber <= 63){
					// NVIC-ICER[1]
			*NVIC_ICER1 |= (1 << (IRQNumber % 32));

		}else if(IRQNumber >= 64 && IRQNumber <= 96){
					// NVIC-ICER[2]
			*NVIC_ICER2 |= (1 << (IRQNumber % 64));
		}

	}



}

/************************************************
 * @fn				-  GPIO_IRQIdent
 * @brief			- IRQ number identification and Priority Definition
 *
 * @param[in]		- IRQ number
 * @param[in]		- IRQPriority
 * @return			- None
 * @Note			- None
 * **********************************************/
/*
 * IRQ Configuration and ISR Handling
 * */



void GPIO_PRIORITY(uint8_t IRQNumber, uint8_t IRQPriority){

	// find out  interrupt priority register number
	uint8_t iprx = IRQNumber / 4;
	// find out interrupt section
	uint8_t iprx_sect = IRQNumber % 4;

	// Shift amount
	uint8_t shift_amount =  (( iprx_sect * 8) + (8 - NO_USED_BITS));

	// increase up to interrupt priority number *(NVIC_BASE_ADDR + irq_ipr)
	//
	// ipr_sect * 8 find out startting bits of sections ( ipr_sect* 8)
	*(NVIC_BASE_ADDR + (iprx + 4)) |= (IRQPriority << shift_amount);


}

/************************************************
 * @fn				- GPIO_IRQHandling
 * @brief			- RQ Configuration and ISR Handling
 *
 * @param[in]		- Pin number
 *
 * @return			- None
 * @Note			- None
 * **********************************************/
/*
 * IRQ Configuration and ISR Handling
 * */


void GPIO_INTERRUPT_Handling(uint8_t PinNumber){

	// if you see it is not triggered!
	if (EXTI->PR &= (1 << PinNumber)){

		// clear
		EXTI->PR |= (1 << PinNumber);
	}


}



// ==================DELAY FUNCTION ========================


void delay(){

	for(uint32_t i = 0; i< 50000/2; i++);



}


/*CODE PROMO FOR GPIO SYSCFG*/

/************************************************
 * @fn				- GPIO_BASEADDR_TOCODE
 * @brief			- Generate int [0-7], related with GPIO
 *
 * @param[in]		- GPIO Port Number
 *
 * @return			- Uint8_t
 * @Note			- None
 * **********************************************/
/*
 * IRQ Configuration and ISR Handling
 * */

uint8_t GPIO_BASEADDR_TOCODE(GPIO_RefDef_t *pGPIOx){

	// check if pointer points to GPIOA port
	// if yes, return 0, otherwise, check all statements!
	if(pGPIOx==GPIOA){

		return 0;
	}else if(pGPIOx==GPIOB){

		return 1;
	}else if (pGPIOx==GPIOC){

		return 2;
	}else if(pGPIOx == GPIOD){

		return 3;
	}else if(pGPIOx==GPIOE){

		return 4;
	}else if(pGPIOx==GPIOF){

		return 5;
	}else if(pGPIOx==GPIOG){

		return 6;
	}else if(pGPIOx==GPIOI){

		return 7;
	}
}

