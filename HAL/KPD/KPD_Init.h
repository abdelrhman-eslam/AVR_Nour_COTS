/*
 * KPD_Init.h
 *
 *  Created on: Dec 11, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef HAL_SSD_KPD_INIT_H_
#define HAL_SSD_KPD_INIT_H_

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Init.h"
#include "util/delay.h"
#include "KPD_Confg.h"



void KPD_voidInit();
u8 KPD_u8GetPressedKey();

#endif /* HAL_SSD_KPD_INIT_H_ */
