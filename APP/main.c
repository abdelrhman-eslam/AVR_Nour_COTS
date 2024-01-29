/*
 * main.c
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "../MCAL/DIO/DIO_Init.h"
#include "../HAL/LCD/LCD_Init.h"
#include "util/delay.h"

int main(void)
{
	MDIO_voidSetPortDirection(PORTA,0xff);
	MDIO_voidSetPortDirection(PORTB,0xff);
	HLCD_voidInit();

	u8 heart[]={
			0x1F, 0x09, 0x09, 0x0F, 0x00, 0x00, 0x00, 0x00	};

	u8 myShape[] = {
			0x04,0x0A,0x15,0x15,0x0A,0x04,0x00,0x00
	};
HLCD_voidSendData('A');
	HLCD_voidSaveCustomChar(1,heart);
	HLCD_voidCursor(3,1);
	HLCD_voidDisplayCustomChar(1);


	while(1)
	{

	}
}
