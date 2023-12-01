/*
 * DIO_Priv.h
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef MCAL_DIO_DIO_PRIV_H_
#define MCAL_DIO_DIO_PRIV_H_

#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7

#define PORTA  0
#define PORTB  1
#define PORTC  2
#define PORTD  3

#define OUTPUT 1
#define INPUT  0

#define HIGH   1
#define LOW    0



// DIO_PORTA_REG=0xFF; = PORTA=0xFF;
#define DIO_PORTA_REG     *((volatile u8 *) 0X3B)
#define DIO_DDRA_REG      *((volatile u8 *) 0X3A)
#define DIO_PINA_REG      *((volatile u8 *) 0X39)

#define DIO_PORTB_REG     *((volatile u8 *) 0X38)
#define DIO_DDRB_REG      *((volatile u8 *) 0X37)
#define DIO_PINB_REG      *((volatile u8 *) 0X36)

#define DIO_PORTC_REG     *((volatile u8 *) 0X35)
#define DIO_DDRC_REG      *((volatile u8 *) 0X34)
#define DIO_PINC_REG      *((volatile u8 *) 0X33)

#define DIO_PORTD_REG     *((volatile u8 *) 0X32)
#define DIO_DDRD_REG      *((volatile u8 *) 0X31)
#define DIO_PIND_REG      *((volatile u8 *) 0X30)
#endif /* MCAL_DIO_DIO_PRIV_H_ */
