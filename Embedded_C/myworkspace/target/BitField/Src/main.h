/*
 * main.h
 *
 *  Created on: Oct 10, 2022
 *      Author: fikrat
 */

#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>

// Register Enable

typedef struct {

	uint32_t gpioa_en:	1;
	uint32_t gpiob_en:	1;
	uint32_t gpioc_en:	1;
	uint32_t gpiod_en:	1;
	uint32_t gpioe_en:	1;
	uint32_t gpiof_en:	1;
	uint32_t gpiog_en:	1;
	uint32_t gpioh_en:	1;
	uint32_t gpioi_en:	1;
	uint32_t reserved_3_0:	3;

	uint32_t crcen:		1;
	uint32_t reserved_5:	5;
	uint32_t bkpsramen:		1;
	uint32_t reserved_19:	1;
	uint32_t ccmdataramen:	1;
	uint32_t dma1en:	1;
	uint32_t dma2en:	1;
	uint32_t reserved_24:	2;

	uint32_t ethmac_en		:1;
	uint32_t ethmactx_en	:1;
	uint32_t ethmacrx_en	:1;
	uint32_t ethmacptp_en	:1;
	uint32_t otghs_en		:1;
	uint32_t otghsulpi_en	:1;




}RCC_AHB1ENR_t;


// Register Enable

typedef struct {
	uint32_t pin_0:		2;
	uint32_t pin_1:		2;
	uint32_t pin_2:		2;
	uint32_t pin_3:		2;
	uint32_t pin_4:		2;
	uint32_t pin_5:		2;
	uint32_t pin_6:		2;
	uint32_t pin_7:		2;
	uint32_t pin_8:		2;
	uint32_t pin_9:		2;

	uint32_t pin_10:	2;

	uint32_t pin_11:	2;
	uint32_t pin_12:	2;
	uint32_t pin_13:	2;
	uint32_t pin_14:	2;
	uint32_t pin_15:	2;



}GPIOx_MODE_t;

// Register Enable

typedef struct {

		uint32_t pin_0:		1;
		uint32_t pin_1:		1;
		uint32_t pin_2:		1;
		uint32_t pin_3:		1;
		uint32_t pin_4:		1;
		uint32_t pin_5:		1;
		uint32_t pin_6:		1;
		uint32_t pin_7:		1;
		uint32_t pin_8:		1;
		uint32_t pin_9:		1;

		uint32_t pin_10:	1;

		uint32_t pin_11:	1;
		uint32_t pin_12:	1;
		uint32_t pin_13:	1;
		uint32_t pin_14:	1;
		uint32_t pin_15:	1;
		uint32_t reserved:	16;


}GPIOx_ODR_t;



#endif /* MAIN_H_ */
