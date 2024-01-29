/*
 * EXTI_int.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_EXTI_EXTI_INT_H_
#define MCAL_EXTI_EXTI_INT_H_

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_MATH.h"
#include "EXTI_config.h"
#include "EXTI_private.h"


#define EXTI_0         0
#define EXTI_1         1
#define EXTI_2         2

#define EXTI_LOWLEVEL  0
#define EXTI_ONCHANGE  1
#define EXTI_FALLING   2
#define EXTI_RISING    3


void MEXTI_voidSenseControl(u8 A_u8EXTI_Line, u8 A_u8EXTI_Sense);
void MEXTI_voidEnable      (u8 A_u8EXTI_Line);
void MEXTI_voidDisEnable   (u8 A_u8EXTI_Line);
#endif /* MCAL_EXTI_EXTI_INT_H_ */
