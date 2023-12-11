/*
 * KPD_Prog.c
 *
 *  Created on: Dec 11, 2023
 *      Author: ENG.AbdelrhmanEslam
 */
#include "KPD_Init.h"

u8 col, row,KPD_u8PressedKey;


u8 KPD_GRID[4][4]={
		{7  ,8 , 9 ,'/'}, //ROWS
		{4  ,5 , 6 ,'*'},
		{1  ,2 , 3 ,'-'},
		{'C',0 ,'=','+'}
		//COL
};


void KPD_voidInit(){
	MDIO_voidSetPortDirection(KPD_PORT, 0b00001111);
	MDIO_voidSetPortValue(KPD_PORT, 0b11111111);
}

u8 KPD_u8GetPressedKey()
{
	for( col=0; col <ColsNo ; col++)
	{
		MDIO_voidSetPinValue(KPD_PORT, col, LOW) ;
		for(row=4; row<RowsNo+ColsNo; row++) //4,5,6,7
		{
			if(MDIO_u8GetPinValue(KPD_PORT, row)==LOW)
			{
				KPD_u8PressedKey= KPD_GRID[row-RowsNo][col];
			}
			while(MDIO_u8GetPinValue(KPD_PORT, row)==LOW);
			_delay_ms(10);
		}
		MDIO_voidSetPinValue(KPD_PORT, col, HIGH) ;
	}


	return KPD_u8PressedKey;
}
