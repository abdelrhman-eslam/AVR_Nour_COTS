/*
 * SPI.c
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#include "SPI_Init.h"

void MSPI_vInit(void)
{

//#if SPI_MODE==SPI_MASTER

	MDIO_vSetPinDir(PORTB, PIN5, OUTPUT); // MOSI -> OUTPUT
	MDIO_vSetPinDir(PORTB, PIN7, OUTPUT); // SCK -> OUTPUT
	MDIO_vSetPinDir(PORTB, PIN6, INPUT); // MISO -> INPUT
	MDIO_vSetPinDir(PORTB, PIN6, HIGH);

//#endif

	const u8 spcr_setting = 0b01011110;

	/* write your configurable code here */

	SPCR = spcr_setting ;

}

u8   MSPI_u8Transceive(u8 A_u8Data)
{
	u8 dummy ;

	/* Start transmission */
	SPDR = A_u8Data;
	/* Wait for transmission complete */
	while(GET_BIT(SPSR, SPIF) != 1){}


//	dummy = SPSR ;
//	dummy = SPDR ;


	return SPDR;
}
