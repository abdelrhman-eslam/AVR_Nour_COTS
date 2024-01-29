/*
 * UART_Init.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_UART_UART_INIT_H_
#define MCAL_UART_UART_INIT_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "UART_Private.h"
#include "UART_confg.h"

void MUART_vInit(void);
void MUART_vTransmit(u8 A_u8Byte);
u8   MUART_u8Recieve(void);

void MUART_vSendString(char* str);
void MUART_vSendNumber(s32 Num);
void MUART_vReceiveString(char str[], u32 size);


void MUART_vSetBaudRate(u32 A_u32BaudRate);
#endif /* MCAL_UART_UART_INIT_H_ */
