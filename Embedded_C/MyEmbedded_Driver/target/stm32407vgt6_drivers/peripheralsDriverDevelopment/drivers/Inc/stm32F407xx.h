/*
 * stm32F407xx.h
 *
 *  Created on: Oct 17, 2022
 *      Author: fikrat
 */

#ifndef STM32F407XX_H_
#define STM32F407XX_H_

//=======Include Header ======
#include <stdint.h>
#include<stdbool.h>
//User Defined Types

#define __vo volatile



/*=================Memory Base Address=====================*/

#define FLASH_BASEADDR						0x08000000U   		/*!<explain this macro briefly here  */
#define SRAM1_BASEADDR						0x20000000U  		/*!<explain this macro briefly here  */
#define SRAM2_BASEADDR						0x2001C000U 		/*!<explain this macro briefly here  */
#define ROM_BASEADDR						0x1FFF0000U
#define SRAM 								SRAM1_BASEADDR
//===========================================================


/*
 *  BUS BASE PERIPHERAL ADDRESS
 * */

#define PERIHP_BASE							0x40000000U
#define APB1PERIPH_BASE						PERIHP_BASE
#define APB2PERIPH_BASE						0x40010000U
#define AHB1PERIPH_BASE						0x40020000U
#define AHB2PERIPH_BASE						0x50000000U

//=======================================================

//****************** NESTED VECTOR  INTERRUPT ********************************************************
//*********************INTERRUPT SET ENABLE REGISTER***************************************************
#define NVIC_ISER0         	 				( (__vo uint32_t*)0xE000E100 )
#define NVIC_ISER1          				( (__vo uint32_t*)0xE000E104 )
#define NVIC_ISER2         					( (__vo uint32_t*)0xE000E108 )
#define NVIC_ISER3          				( (__vo uint32_t*)0xE000E10c )


/**********NESTED VECTOR TABLE-INTERRUPT PRIORITY REGISTER*****************/

#define NVIC_BASE_ADDR						( (__vo uint32_t*) 0xE000E400U )

//**********************INTERRUPT CLEAR ENABLE REGISTER************************************************
#define NVIC_ICER0 							((__vo uint32_t*)0xE000E180)
#define NVIC_ICER1							((__vo uint32_t*)0xE000E184)
#define NVIC_ICER2  						((__vo uint32_t*)0xE000E188)
#define NVIC_ICER3							((__vo uint32_t*)0xE000E18C)
//***************************************************************************



/*Bus Address of Peripherals which are hanging on AHB1 bUS*/
#define GPIOA_BASE_ADDR							(AHB1PERIPH_BASE + 0x000)
#define GPIOB_BASE_ADDR							(AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASE_ADDR							(AHB1PERIPH_BASE + 0x0800)
#define GPIOD_BASE_ADDR							(AHB1PERIPH_BASE + 0x0C00)
#define GPIOE_BASE_ADDR							(AHB1PERIPH_BASE + 0x1000)
#define GPIOF_BASE_ADDR							(AHB1PERIPH_BASE + 0x1400)
#define GPIOG_BASE_ADDR							(AHB1PERIPH_BASE + 0x1800)
#define GPIOH_BASE_ADDR							(AHB1PERIPH_BASE + 0x1C00)
#define GPIOI_BASE_ADDR							(AHB1PERIPH_BASE + 0x2000)
/*=================RCC  Base Address ===========================*/
#define RCC_BASE_ADDR						    (AHB1PERIPH_BASE + 0x3800)
//==================================================================


/*Bus Address of Peripherals which are hanging on APB 1 BUS*/
#define I2C1_BASE_ADDR									(APB1PERIPH_BASE + 0x5400)
#define	I2C2_BASE_ADDR									(APB1PERIPH_BASE + 0x5800)
#define	I2C3_BASE_ADDR									(APB1PERIPH_BASE + 0x5C00)

#define	SPI2_BASE_ADDR									(APB1PERIPH_BASE + 0x3800)
#define SPI3_BASE_ADDR									(APB1PERIPH_BASE + 0x3C00)

#define USART2_BASE_ADDR								(APB1PERIPH_BASE + 0x4400)
#define USART3_BASE_ADDR								(APB1PERIPH_BASE + 0x4800)
#define UART4_BASE_ADDR									(APB1PERIPH_BASE+ 0x4C00)
#define UART5_BASE_ADDR									(APB1PERIPH_BASE+ 0x5000)
//================================================================




/*Bus Address of Peripherals which are hanging on APB 2 BUS*/
#define SPI1_BASE_ADDR								   (APB2PERIPH_BASE + 0X3000)
#define USART1_BASE_ADDR							   (APB2PERIPH_BASE + 0x1000)
#define USART6_BASE_ADDR							   (APB2PERIPH_BASE + 0x1400)
#define EXTI_BASE_ADDR								   (APB2PERIPH_BASE + 0x3C00)
#define SYSCFG_BASE_ADDR							   (APB2PERIPH_BASE + 0x3800)
//================================================================





/*Registers of Peripheral are specific to MCU
 * GPIO Mode Registers in struct
 * */


typedef struct{

	__vo uint32_t MODER;					// 0x00
	__vo uint32_t OTYPER; 				// 0x04
	__vo uint32_t OSPEEDR; 				// 0x08
	__vo uint32_t PUPDR; 				// 0x0C
	__vo uint32_t IDR;   				// 0x10
	__vo uint32_t ODR; 					// 0x14
	__vo uint32_t BSRR; 					// 0x18
	__vo uint32_t LCKR; 					// 0x1C
	__vo uint32_t AFR[2]; 					// 0x20		OR	// 0x24


}GPIO_RefDef_t;




/*RCC Peripheral Register Mapping*/

typedef struct{

    __vo uint32_t CR;				 /*!< 0x00  >*/
	__vo uint32_t PLLCFGR;			 /*!< 0x04  >*/
	__vo uint32_t CFGR; 			 /*!< 0x08  >*/
	__vo uint32_t CIR;			 	 /*!< 0x0C  >*/
	__vo uint32_t AHB1RSTR;     	 /*!< 0x10  >*/
	__vo uint32_t AHB2RSTR;			 /*!< 0x14  >*/
	__vo uint32_t AHB3RSTR;			 /*!< 0x18  >*/
	uint32_t RESERVED0;				 /*!< 0x1C  >*/
	__vo uint32_t APB1RSTR;			 /*!< 0x20  >*/
	__vo uint32_t APB2RSTR;			 /*!< 0x24  >*/
	uint32_t RESERVED1; 			 /*!< 0x28  >*/
	uint32_t RESERVED2; 			 /*!<0x2C>*/
	__vo uint32_t AHB1ENR;           /*!< 0x30  >*/
	__vo uint32_t AHB2ENR;           /*!< 0x34  >*/
	__vo uint32_t AHB3ENR;			 /*!< 0x38  >*/
	uint32_t RESERVED3;              /*!< 0x3C >*/
	__vo uint32_t APB1ENR; 	         /*!< 0x40  >*/
	__vo uint32_t APB2ENR;           /*<  0x44  > */
	uint32_t RESERVED4;				 /*!<0x48>*/
	uint32_t RESERVED5;				 /*!< 0x4C>*/
	__vo uint32_t AHB1LPENR;		 /*   0x50  >*/
	__vo uint32_t AHB2LPENR;		 /*<  0x54  >*/
	__vo uint32_t AHB3LPENR;		 /*<  0x58  >*/
	uint32_t RESERVED6;					/*< 0x5C>*/
	__vo uint32_t APB1LPENR;		 /*<  0x60  >*/
	__vo uint32_t APB2LPENR;		 /*<  0x64  >*/
	uint32_t RESERVED7; 			/*<	0x68 >*/
	uint32_t RESERVED8;				/*<	0x6C >*/
	__vo uint32_t BDCR;				 /*<  0x70  >*/
	__vo uint32_t CSR;				 /*<  0x74  >*/
	uint32_t RESERVED9;				 /*< 0x78 >*/
	uint32_t RESERVED10;			 /*< 0x7C >*/
	__vo uint32_t SSCGR;			 /*<  0x80  >*/
	__vo uint32_t PLLI2SCFGR;        /*<  0x84  >*/
	__vo uint32_t PLLSAICFGR;		 /*<  0x88  >*/
	__vo uint32_t DCKCFGR;			 /*<  0x8C  >*/

}RCC_RefDef_t;




/*
 * peripheral register definition structure for EXTI
 */
typedef struct
{
	__vo uint32_t IMR;    /*!< Give a short description,   INTERRUPT MASK REGISTER (0 MASKED, 1 NOT MASKED(ENABLED))     Address offset: 0x00 */
	__vo uint32_t EMR;    /*!< TODO,    EVENT MASKED REGISTER (0 MASKED, 1 NOT MASKED)      					Address offset: 0x04 */
	__vo uint32_t RTSR;   /*!< TODO,  	Rising trigger selection register (0 DISABLED, 1 ENABLED)				Address offset: 0x08 */
	__vo uint32_t FTSR;   /*!< TODO, 	Falling trigger selection register (0 DISABLED, 1 ENABLED)				Address offset: 0x0C */
	__vo uint32_t SWIER;  /*!< TODO,    Software interrupt event register 										Address offset: 0x10 */
	__vo uint32_t PR;     /*!< TODO, 	Pending register (0 NO TRIGGER, 1 TRIGGER REGUESTER) 					Address offset: 0x14 */

}EXTI_RegDef_t;





/*I2C Peripheral Register Mapping*/

typedef struct{

	__vo uint32_t I2C_CR1;			/*!< TODO,     										Address offset: 0x00 */
	__vo uint32_t I2C_CR2;			/*!< TODO,     										Address offset: 0x04 */
	__vo uint32_t I2C_OAR1;			/*!< TODO,     										Address offset: 0x08 */
	__vo uint32_t I2C_OAR2;			/*!< TODO,     										Address offset: 0x0C */
	__vo uint32_t I2C_DR;			/*!< TODO,     										Address offset: 0x10 */
	__vo uint32_t I2C_SR1;			/*!< TODO,     										Address offset: 0x14 */
	__vo uint32_t I2C_SR2;			/*!< TODO,     										Address offset: 0x18 */
	__vo uint32_t I2C_CCR;			/*!< TODO,     										Address offset: 0x1C */
	__vo uint32_t I2C_TRISE;		/*!< TODO,     										Address offset: 0x20 */
	__vo uint32_t I2C_FLTR;			/*!< TODO,     										Address offset: 0x24 */



}I2C_RefDef_t;

//===================================================

/*
 * peripheral register definition structure for SPI
 */
typedef struct
{
	__vo uint32_t CR1;        /*!< TODO,     										Address offset: 0x00 */
	__vo uint32_t CR2;        /*!< TODO,     										Address offset: 0x04 */
	__vo uint32_t SR;         /*!< TODO,     										Address offset: 0x08 */
	__vo uint32_t DR;         /*!< TODO,     										Address offset: 0x0C */
	__vo uint32_t CRCPR;      /*!< TODO,     										Address offset: 0x10 */
	__vo uint32_t RXCRCR;     /*!< TODO,     										Address offset: 0x14 */
	__vo uint32_t TXCRCR;     /*!< TODO,     										Address offset: 0x18 */
	__vo uint32_t I2SCFGR;    /*!< TODO,     										Address offset: 0x1C */
	__vo uint32_t I2SPR;      /*!< TODO,     										Address offset: 0x20 */
} SPI_RegDef_t;

//=======================================

/*
 * peripheral register definition structure for SYSCFG
 */
typedef struct
{
	__vo uint32_t MEMRMP;       /*!< memory remap register Give a short description,           Address offset: 0x00      */
	__vo uint32_t PMC;          /*!< TODO,     mode configuration register 	Address offset: 0x04      */
	__vo uint32_t EXTICR[4];    /*!< TODO , external interrupt configuration register				 Address offset: 0x08-0x14 */
	uint32_t      RESERVED1[2];  /*!< TODO          							  Reserved, 0x18-0x1C    	*/
	__vo uint32_t CMPCR;        /*!< TODO    Compensation cell control register     								  Address offset: 0x20      */
	uint32_t      RESERVED2[2];  /*!<                                             Reserved, 0x24-0x28 	    */
	__vo uint32_t CFGR;         /*!< TODO                                      Address offset: 0x2C   	*/
} SYSCFG_RegDef_t; //*************This is Specific Configuration Memory Remap Register!***********************



/*
 * peripheral register definition structure for USART
 *
 */

typedef struct{

	__vo uint32_t SR;         /*!< TODO,     										Address offset: 0x00 */
	__vo uint32_t DR;         /*!< TODO,     										Address offset: 0x04 */
	__vo uint32_t BRR;        /*!< TODO,     										Address offset: 0x08 */
	__vo uint32_t CR1;        /*!< TODO,     										Address offset: 0x0C */
	__vo uint32_t CR2;        /*!< TODO,     										Address offset: 0x10 */
	__vo uint32_t CR3;        /*!< TODO,     										Address offset: 0x14 */



}USART_RegDef_t;
//=====================================================


/*
 *Peripheral Definitions typecasted to GPIOxx_RefDef_t
 * */
#define GPIOA 					( (GPIO_RefDef_t*) GPIOA_BASE_ADDR)
#define GPIOB 					( (GPIO_RefDef_t*) GPIOB_BASE_ADDR)

#define GPIOC 					( (GPIO_RefDef_t*) GPIOC_BASE_ADDR)
#define GPIOD 					( (GPIO_RefDef_t*) GPIOD_BASE_ADDR)

#define GPIOE 					( (GPIO_RefDef_t*) GPIOE_BASE_ADDR)
#define GPIOF 					( (GPIO_RefDef_t*) GPIOF_BASE_ADDR)

#define GPIOG 					( (GPIO_RefDef_t*) GPIOG_BASE_ADDR)
#define GPIOH 					( (GPIO_RefDef_t*) GPIOH_BASE_ADDR)
#define GPIOI 					( (GPIO_RefDef_t*) GPIOI_BASE_ADDR)

#define RCC 				 	(( RCC_RefDef_t*) RCC_BASE_ADDR )

//================== External Interrupt and Event Controller!=====================
#define EXTI					(( EXTI_RegDef_t*) EXTI_BASE_ADDR)
#define SYSCFG				    ((SYSCFG_RegDef_t*) SYSCFG_BASE_ADDR)

//================================================================

/*
 *Peripheral Definitions typecasted toI2Cxx_RefDef_t
 * */

#define I2C1					((I2C_RefDef_t*) I2C1_BASE_ADDR)
#define I2C2					((I2C_RefDef_t*) I2C2_BASE_ADDR)
#define I2C3					((I2C_RefDef_t*) I2C3_BASE_ADDR)


//=================================================


/*
 *Peripheral Definitions typecasted toSPIxx_RefDef_t
 * */
#define SPI1				((SPI_RegDef_t*) SPI1_BASE_ADDR )
#define	SP2					((SPI_RegDef_t*) SPI2_BASE_ADDR )
#define SP3					((SPI_RegDef_t*) SPI3_BASE_ADDR )


//================================================

/*
 *Peripheral Definitions typecasted to USARTxx_RefDef_t
 * */
#define USART1				((USART_RegDef_t*) USART1_BASE_ADDR)
#define USART2				((USART_RegDef_t*) USART2_BASE_ADDR)
#define USART3				((USART_RegDef_t*) USART3_BASE_ADDR)
#define UART4				((USART_RegDef_t*) UART4_BASE_ADDR)
#define UART5				((USART_RegDef_t*) UART6_BASE_ADDR)
#define USART6				((USART_RegDef_t*) USART6_BASE_ADDR)




/*CLOCK ENABLE MACRO FOR GPIO_X*/

#define GPIOA_PCLK_EN()			( RCC->AHB1ENR |= (1 << 0) )
#define GPIOB_PCLK_EN()			( RCC->AHB1ENR |= (1 << 1) )

#define GPIOC_PCLK_EN()			( RCC->AHB1ENR |= (1 << 2) )
#define GPIOD_PCLK_EN()			( RCC->AHB1ENR |= (1 << 3) )

#define GPIOE_PCLK_EN()			( RCC->AHB1ENR |= (1 << 4) )
#define GPIOF_PCLK_EN()			( RCC->AHB1ENR |= (1 << 5) )

#define GPIOG_PCLK_EN()			( RCC->AHB1ENR |= (1 << 6) )
#define GPIOH_PCLK_EN()			( RCC->AHB1ENR |= (1 << 7) )
#define GPIOI_PCLK_EN()			( RCC->AHB1ENR |= (1 << 8) )
//============================================================

/*===============CLOCK ENABLE FOR I2CX ,SPX, UARTX PERIPHERALS BUS APB1ENR============*/

#define I2C1_PCLK_EN()			(RCC->APB1ENR  |= ( 1 << 21) )
#define I2C2_PCLK_EN()			(RCC->APB1ENR  |= ( 1 << 22) )
#define I2C3_PCLK_EN()			(RCC->APB1ENR  |= ( 1 << 23) )


#define SP2_PCLK_EN()			(RCC->APB1ENR |= ( 1 << 14) )
#define SP3_PCLK_EN()			(RCC->APB1ENR |= ( 1 << 15) )

#define USART2_PCLK_EN()		(RCC->APB1ENR |= ( 1 << 17) )
#define USART3_PCLK_EN()		(RCC->APB1ENR |= ( 1 << 18) )

#define UART4_PCLK_EN()			(RCC->APB1ENR |= ( 1 << 19) )
#define UART5_PCLK_EN()			(RCC->APB1ENR |= ( 1 << 20) )
//=====================================================================

/*===============CLOCK ENABLE FOR  PERIPHERALS BUS APB2ENR============*/
#define SP1_PCLK_EN()			(RCC->APB2ENR |= (1 << 12))
#define USART1_PCLK_EN()		(RCC->APB2ENR |= (1 << 4))
#define USART6_PCLK_EN()		(RCC->APB2ENR |= (1 << 5))
#define SYSCFG_PCLK_EN()		(RCC->APB2ENR |= (1 << 14))

//=====================================================================

/*
 * CLOCK DISABLE FOR REGISTER PERIPHERALS
 *
 * *//*
 * Clock Disable Macros for GPIOx peripherals
 */
#define GPIOA_PCLK_DI()

/*CLOCK ENABLE MACRO FOR GPIO_X*/


#define GPIOA_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 0)); (RCC->AHB1RSTR &= ~(1 << 0)); }while(0)
#define GPIOB_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 1)); (RCC->AHB1RSTR &= ~(1 << 1)); }while(0)
#define GPIOC_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 2)); (RCC->AHB1RSTR &= ~(1 << 2)); }while(0)
#define GPIOD_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 3)); (RCC->AHB1RSTR &= ~(1 << 3)); }while(0)
#define GPIOE_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 4)); (RCC->AHB1RSTR &= ~(1 << 4)); }while(0)
#define GPIOF_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 5)); (RCC->AHB1RSTR &= ~(1 << 5)); }while(0)
#define GPIOG_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 6)); (RCC->AHB1RSTR &= ~(1 << 6)); }while(0)
#define GPIOH_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 7)); (RCC->AHB1RSTR &= ~(1 << 7)); }while(0)
#define GPIOI_REG_RESET()               do{ (RCC->AHB1RSTR |= (1 << 8)); (RCC->AHB1RSTR &= ~(1 << 8)); }while(0)

//============================================================

/*===============CLOCK ENABLE FOR I2CX ,SPX, UARTX PERIPHERALS BUS APB1ENR============*/

/*#define I2C1_RESET_EN()			(RCC->APB1ENR  &= ~(0 << 21) )
#define I2C2_RESET_EN()			(RCC->APB1ENR  &= ~(0 << 22) )
#define I2C3_RESET_EN()			(RCC->APB1ENR  &= ~(0 << 23) )


#define SP2_RESET_EN()			(RCC->APB1ENR &= ~(0 << 14) )
#define SP3_RESET_EN()			(RCC->APB1ENR &= ~(0 << 15) )

#define USART2_RESET_EN()		(RCC->APB1ENR &= ~(0 << 17) )
#define USART3_RESET_EN()		(RCC->APB1ENR &= ~(0 << 18) )

#define UART4_RESET_EN()			(RCC->APB1ENR &= ~(0 << 19) )
#define UART5_RESET_EN()			(RCC->APB1ENR &= ~(0 << 20) )*/
//=====================================================================

/*===============CLOCK ENABLE FOR  PERIPHERALS BUS APB2ENR============*/
/*#define SP1_RESET_EN()			(RCC->APB2ENR &= ~(0 << 12))
#define USART1_RESET_EN()		(RCC->APB2ENR &= ~(0 << 4))
#define USART6_RESET_EN()		(RCC->APB2ENR &= ~(0 << 5))
#define SYSCFG_RESET_EN()		(RCC->APB2ENR &= ~(0 << 14))*/



/**********SOME GENERIC MACROS****************/

#define ENABLE 						1
#define DISABLE 					0
#define SET 						ENABLE
#define RESET 						DISABLE
#define GPIO_PIN_SET				SET
#define GPIO_PIN_RESET				RESET
#define HIGH						ENABLE
#define BUTTON_PRESSED				0

#define NO_USED_BITS				4

/*HEADER */
#include "stm32fxx.gpio_driver.h"


#endif /* STM32F407XX_H_ */
