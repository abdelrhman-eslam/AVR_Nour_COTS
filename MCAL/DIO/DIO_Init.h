/*
 * DIO_Init.h
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_DIO_DIO_INIT_H_
#define MCAL_DIO_DIO_INIT_H_

#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "DIO_Priv.h"


/*
 * DDR A = 0000
 * PORT A= 00000
 * PIN 0 = 000
 * */

void MDIO_voidSetPinDirection(u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8PinDirection);
void MDIO_voidSetPinValue	 (u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8PinValue);
u8   MDIO_u8GetPinValue 	 (u8 A_u8PortNo,u8 A_u8PinNo);

void MDIO_voidSetPortDirection(u8 A_u8PortNo,u8 A_u8PortDirection);
void MDIO_voidSetPortValue	  (u8 A_u8PortNo,u8 A_u8PortValue);

#endif /* MCAL_DIO_DIO_INIT_H_ */
