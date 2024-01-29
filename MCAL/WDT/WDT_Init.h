/*
 * WDT_Init.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_WDT_WDT_INIT_H_
#define MCAL_WDT_WDT_INIT_H_


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "WDT_Prtivate.h"
#include "WDT_config.h"

void WDT_voidEnable(void);


void WDT_voidDisable(void);


void WDT_voidSleep(u8 u8SleepTime);

#endif /* MCAL_WDT_WDT_INIT_H_ */
