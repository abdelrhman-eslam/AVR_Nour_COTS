/*
 * DIO_Prog.c
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "DIO_Init.h"

//(PortA, PIN 0, 1)
void MDIO_voidSetPinDirection(u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8PinDirection)
{
	if((A_u8PortNo <= PORTD) && (A_u8PinNo <= PIN7) && (A_u8PinDirection <= OUTPUT))
	{


	switch(A_u8PortNo)
	{
	case PORTA:
			switch(A_u8PinDirection)
			{
			case OUTPUT: SET_BIT(DIO_DDRA_REG, A_u8PinNo); break;
			case INPUT : CLR_BIT(DIO_DDRA_REG, A_u8PinNo); break;
			}
			break;
	case PORTB:
			switch(A_u8PinDirection)
			{
			case OUTPUT: SET_BIT(DIO_DDRB_REG, A_u8PinNo); break;
			case INPUT : CLR_BIT(DIO_DDRB_REG, A_u8PinNo); break;
			}
			break;
	case PORTC:
			switch(A_u8PinDirection)
			{
			case OUTPUT: SET_BIT(DIO_DDRC_REG, A_u8PinNo); break;
			case INPUT : CLR_BIT(DIO_DDRC_REG, A_u8PinNo); break;
			}
			break;
	case PORTD:
			switch(A_u8PinDirection)
			{
			case OUTPUT: SET_BIT(DIO_DDRD_REG, A_u8PinNo); break;
			case INPUT : CLR_BIT(DIO_DDRD_REG, A_u8PinNo); break;
			}
			break;
	}

	}
}
void MDIO_voidSetPinValue	 (u8 A_u8PortNo,u8 A_u8PinNo,u8 A_u8PinValue)
{
	if((A_u8PortNo <= PORTD) && (A_u8PinNo <= PIN7) && (A_u8PinValue <= HIGH))
		{
		switch(A_u8PortNo)
		{
		case PORTA:
				switch(A_u8PinValue)
				{
				case HIGH: SET_BIT(DIO_PORTA_REG, A_u8PinNo); break;
				case LOW : CLR_BIT(DIO_PORTA_REG, A_u8PinNo); break;
				}
				break;
		case PORTB:
				switch(A_u8PinValue)
				{
				case HIGH: SET_BIT(DIO_PORTB_REG, A_u8PinNo); break;
				case LOW : CLR_BIT(DIO_PORTB_REG, A_u8PinNo); break;
				}
				break;
		case PORTC:
				switch(A_u8PinValue)
				{
				case HIGH: SET_BIT(DIO_PORTC_REG, A_u8PinNo); break;
				case LOW : CLR_BIT(DIO_PORTC_REG, A_u8PinNo); break;
				}
				break;
		case PORTD:
				switch(A_u8PinValue)
				{
				case HIGH: SET_BIT(DIO_PORTD_REG, A_u8PinNo); break;
				case LOW : CLR_BIT(DIO_PORTD_REG, A_u8PinNo); break;
				}
				break;
		}

		}
}
u8   MDIO_u8GetPinValue 	 (u8 A_u8PortNo,u8 A_u8PinNo)
{
	u8 Local_u8PinValue = 5;
	if((A_u8PortNo <= PORTD) && (A_u8PinNo <= PIN7))
	{
	switch(A_u8PortNo)
	{
	case PORTA: Local_u8PinValue= GET_BIT(DIO_PINA_REG,A_u8PinNo); break;
	case PORTB: Local_u8PinValue= GET_BIT(DIO_PINB_REG,A_u8PinNo); break;
	case PORTC: Local_u8PinValue= GET_BIT(DIO_PINC_REG,A_u8PinNo); break;
	case PORTD: Local_u8PinValue= GET_BIT(DIO_PIND_REG,A_u8PinNo); break;
	}

	}
	return Local_u8PinValue;
}

void MDIO_voidSetPortDirection(u8 A_u8PortNo,u8 A_u8PortDirection)
{
	if(A_u8PortNo<= PORTD){
	switch(A_u8PortNo)
	{
	case PORTA: DIO_DDRA_REG= A_u8PortDirection; break;
	case PORTB: DIO_DDRB_REG= A_u8PortDirection; break;
	case PORTC: DIO_DDRC_REG= A_u8PortDirection; break;
	case PORTD: DIO_DDRD_REG= A_u8PortDirection; break;
	}
	}
}
void MDIO_voidSetPortValue	  (u8 A_u8PortNo,u8 A_u8PortValue)
{
	if(A_u8PortNo<= PORTD){
	switch(A_u8PortNo)
		{
	// PORTA=0xff;
		case PORTA:	DIO_PORTA_REG= A_u8PortValue;break;
		case PORTB: DIO_PORTB_REG= A_u8PortValue;break;
		case PORTC: DIO_PORTC_REG= A_u8PortValue;break;
		case PORTD: DIO_PORTD_REG= A_u8PortValue;break;
		}
	}
}
