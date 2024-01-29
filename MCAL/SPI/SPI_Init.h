/*
 * SPI_Init.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_SPI_SPI_INIT_H_
#define MCAL_SPI_SPI_INIT_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_Init.h"

#include "SPI_Private.h"
#include "SPI_config.h"

void MSPI_vInit(void);
u8   MSPI_u8Transceive(u8 A_u8Data);

#endif /* MCAL_SPI_SPI_INIT_H_ */
