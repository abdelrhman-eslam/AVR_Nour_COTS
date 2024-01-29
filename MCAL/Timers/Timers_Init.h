/*
 * Timers_Init.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_TIMERS_TIMERS_INIT_H_
#define MCAL_TIMERS_TIMERS_INIT_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"



#include "Timers_Private.h"
#include "Timers_config.h"

#define TIM_CB_OVF		0
#define TIM_CB_CTC		1

#define TIMER0			0
#define TIMER_1A		1
#define TIMER1			2

typedef enum
{
	ICU_Falling,
	ICU_Rising
}ICU_Trigger_t;


void MTIMERS_vInit(void);

void MTIMERS_vSetPreloadValue(u8 A_u8TimerId ,u16 A_u16Preload);

void MTIMERS_vSetCompareValue(u8 A_u8TimerId ,u16 A_u16CompareValue);

void MTIMERS_vSetInterval_Asynch(u16 A_u16IntervalCounts, void (*A_fptr)(void));

void MTIMERS_vSetInterval_CTC_Asynch(u16 A_u16IntervalCounts,
									u16 A_u16CompareValue,
									void (*A_fptr)(void));

u16  MTIMERS_u16GetElapsedTime(u8 A_u8TimerId);
u16  MTIMERS_u16GetCapturedValue(void);
void MTIMERS_vSetIcuTrigger(ICU_Trigger_t A_xIcuTrigger);
void MTimers_vEnableInterrupt(/* Timer ID ?*/ u8 A_u8InterruptType);
void MTIMERS_vDisableInterrupt(/* Timer ID ?*/ u8 A_u8InterruptType);

void MTIMERS_vSetCallback( /* Timer ID ?*/);

void MTIMERS_vStartTimer(u8 A_u8TimerId, void (*A_xFptr)(void)) ;

void MTIMERS_vStopTimer(u8 A_u8TimerId) ;

#endif /* MCAL_TIMERS_TIMERS_INIT_H_ */
