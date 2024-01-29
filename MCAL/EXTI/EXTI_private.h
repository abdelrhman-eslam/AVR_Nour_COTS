/*
 * EXTI_private.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_

#define REXTI_MCUCR_REG 	*((volatile u8 *) 0x55)
#define REXTI_MCUCSR_REG  	*((volatile u8 *) 0x54)
#define REXTI_GICR_REG	 	*((volatile u8 *) 0x5B)
#define REXTI_GIFR_REG	 	*((volatile u8 *) 0x5A)

#define EXTI_Line0	0
#define EXTI_Line1	1
#define EXTI_Line2	2


#define EXTI_LOWLEVEL 0
#define EXTI_ONChange 1
#define EXTI_Falling  2
#define EXTI_Rising   3

/******************GICR****************************/
#define GICR_INT1		7
#define GICR_INT0		6
#define GICR_INT2		5


/******************MCUCR***************************/
#define MCUCR_ISC11		3
#define MCUCR_ISC10		2
#define MCUCR_ISC01		1
#define MCUCR_ISC00		0


/******************MCUCSR**************************/
#define MCUCSR_INT2		6

#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
