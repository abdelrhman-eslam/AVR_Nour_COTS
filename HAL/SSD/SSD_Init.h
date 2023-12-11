/*
 * SSD_Init.h
 *
 *  Created on: Dec 11, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef HAL_SSD_SSD_INIT_H_
#define HAL_SSD_SSD_INIT_H_

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Init.h"
#include "util/delay.h"
#include "SSD_Confg.h"




#define zero  0
#define one   1
#define two   2
#define three 3
#define four  4
#define five  5
#define six   6
#define seven 7
#define eight 8
#define nine  9


void SSD_voidInit(u8 u8SSD_Port);
void SSD_voidDisplayNumer(u8 u8SSDPort, u8 u8Num);
void SSD_voidDisp2digts(u8 u8SSDPort1,u8 u8SSDPort2, u8 u8Num);
void SSD_voidTurnOff(u8 u8SSDPort);
void SSD_voidCountUp(u8 u8SSDPort, u8 u8Num);
void SSD_voidCountDown(u8 u8SSDPort, u8 u8Num);

#endif /* HAL_SSD_SSD_INIT_H_ */
