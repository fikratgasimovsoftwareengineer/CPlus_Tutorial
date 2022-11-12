/*
 * stm32fxx.spi_driver.c
 *
 *  Created on: Oct 25, 2022
 *      Author: fikrat
 */



// Enable Clock for SPI

void enableClockSPI(SPI_RegDef_t *pSPIx, uint8_t EnorDi);

// SPI INIT handling
void SPI_Init(SPI_Handle_t *spiHandle);


// De Initialization
void SPI_DeInit(SPI_RegDef_t *pSPIx);
