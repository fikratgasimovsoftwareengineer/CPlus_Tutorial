/*
 * stm32fxx.gpio_driver.h
 *
 *  Created on: Oct 17, 2022
 *      Author: fikrat
 */

#ifndef STM32FXX_GPIO_DRIVER_H_
#define STM32FXX_GPIO_DRIVER_H_

#include "stm32F407xx.h"



/*GPIO CONFIGURATION STRUCTURE*/

typedef struct{

	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;							/*<TODO : Possible Values From @GPIO PIN MODES >*/
	uint8_t GPIO_PinSpeed;							/*<TODO : Possible Values From @GPIO SPEED >*/
	uint8_t GPIO_PinPuPdControl;					/*<TODO : Possible Values	From @GPIOPLOPDCONTROL >*/
	uint8_t GPIO_ODPType;
	uint8_t GPIO_PinAltFunMode;

}GPIO_PinConfig_t;


/*GPIO HANDLE STRUCTURE
 * */
typedef struct{

	GPIO_RefDef_t *pGPIOx; 							/*! < This holds GPIO Port to which pin belongs >*/
	GPIO_PinConfig_t GPIO_PinConfig;				/*! < This holds GPIO Pin Configuration >*/

}GPIO_Handle_t;


/*===========@GPIO PIN MODES => MACROS FOR GPIO PORT MODE REGISTER for GPIO PIN===============*/

#define GPIO_MODE_IN			0
#define GPIO_MODE_OUT			1
#define GPIO_MODE_ALTR			2
#define	GPIO_MODE_ALG			3


//=======interrupt macros==================

#define GPIO_MODE_IT_FT			4  				/*<TODO> GPIO FALLING EDGE */
#define GPIO_MODE_IT_RT			5 				/*<TODO> GPIO RISING EDGE */
#define GPIO_MODE_IT_RF			6				/*<TODO> GPIO RISING AND FALLING EDGE */

/*==================GPIO port output type register===========================*/

#define GPIO_OUPUSHPULL			0
#define GPIO_OPENDRAIN			1

/*============@GPIO SPEED => GPIO port output speed register============================*/
#define LO_SD 					0
#define ME_SD					1
#define HI_SPEED				2
#define V_HIGH_SPEED			3



/*============@GPIOPLOPDCONTROL gpio port pull-up/pull-down register============================*/

#define NO_PUL_DOWN				0
#define PUL_UP					1
#define PUL_DU					2
#define RSV						3


/*GPIO PIN NUMBERS*/

#define GPIO_PIN_NO_0			0
#define GPIO_PIN_NO_1			1
#define GPIO_PIN_NO_2			2
#define GPIO_PIN_NO_3			3
#define GPIO_PIN_NO_4			4
#define GPIO_PIN_NO_5			5
#define GPIO_PIN_NO_6			6
#define GPIO_PIN_NO_7			7
#define GPIO_PIN_NO_8			8
#define GPIO_PIN_NO_9			9
#define GPIO_PIN_NO_10			10
#define GPIO_PIN_NO_11			11
#define GPIO_PIN_NO_12			12
#define GPIO_PIN_NO_13			13
#define GPIO_PIN_NO_14			14
#define GPIO_PIN_NO_15			15




/***************************************************************
 * 					API SUPPORTED BY THIS DRIVER
 * 			FOR MORE INFORMATION ABOUT APIs CHECK FUNCTION DETALS
 *
 * ***************************************************************/

/*
 * Peripheral Clock SetUp
 * */

void GPIO_PeriClockControl(GPIO_RefDef_t *pGPIOx, uint8_t EnorDi);

/*
 * Init and De-Init
 * */
void GPIO_Init(GPIO_Handle_t *pGPIO_Handle);

void GPIO_DeInit(GPIO_RefDef_t *pGPIOx); 			//Reset with RCC reset peripheral

/*
 * GPIO Read and Write
 * */
//Getter for GPIO
uint8_t GPIO_ReadFromInputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber);

uint16_t GPIO_ReadFromInputPort(GPIO_RefDef_t *pGPIOx);

//Setter for GPIO
void GPIO_WriteToOutputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);


void GPIO_WriteToOutputPort(GPIO_RefDef_t *pGPIOx, uint16_t Value);

void GPIO_ToggleOutputPin(GPIO_RefDef_t *pGPIOx, uint8_t PinNumber);

/*
 * IRQ Configuration and ISR Handling
 * */
void GPIO_IRQConfig(uint8_t IRQNumber,uint8_t EnorDi);

void GPIO_INTERRUPT_Handling(uint8_t PinNumber);

void GPIO_PRIORITY(uint8_t IRQNumber, uint8_t IRQPriority);


uint8_t GPIO_BASEADDR_TOCODE(GPIO_RefDef_t *pGPIOx);










#endif /* STM32FXX_GPIO_DRIVER_H_ */
