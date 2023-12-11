/*
 * SSD_Prog.c
 *
 *  Created on: Dec 11, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "SSD_Init.h"



u8 SSD_grid[10]={
		0b00111111,  //0
		0b00000110,  //1
		0b01011011,  //2
		0b01001111,  //3
		0b01100110,  //4
		0b01101101,  //5
		0b01111101,  //6
		0b00000111,  //7
		0b01111111,  //8
		0b01101111   //9

};

void SSD_voidInit(u8 u8SSD_Port)
	{
	MDIO_voidSetPortDirection(u8SSD_Port, OUTPUT);
	}

void SSD_voidDisplayNumer(u8 u8SSDPort, u8 u8Num)
{
	if(u8Num<10)
	{
#if SSD_TYPE == cathode
		MDIO_voidSetPortValue(u8SSDPort,SSD_grid[u8Num]);
#elif SSD_TYPE == anode
		MDIO_voidSetPortValue(u8SSDPort,~SSD_grid[u8Num]);
#endif
	}
}




void SSD_voidDisp2digts(u8 u8SSDPort1,u8 u8SSDPort2, u8 u8Num)
{
	if (u8Num <100)
	{
		u8 dig1 = u8Num % 10;
		u8 dig2 = u8Num / 10;

		SSD_voidDisplayNumer(u8SSDPort1, dig1);
		SSD_voidDisplayNumer(u8SSDPort2, dig2);
	}


}


void SSD_voidTurnOff(u8 u8SSDPort){
#if SSD_TYPE == cathode
	MDIO_voidSetPortValue(u8SSDPort,0x00);
#elif SSD_TYPE == anode
	MDIO_voidSetPortValue(u8SSDPort,0xff);
#endif
}


void SSD_voidCountUp(u8 u8SSDPort, u8 u8Num)
{
	for ( u8 counter=u8Num ; counter <= nine ; counter++ )
	{
		SSD_voidDisplayNumer(u8SSDPort, counter);
		_delay_ms(delaytime);
	}

}


void SSD_voidCountDown(u8 u8SSDPort, u8 u8Num)
{
	for (s8 counter=u8Num ; counter >= zero ; counter-- )
	{
		SSD_voidDisplayNumer(u8SSDPort, counter);
		_delay_ms(delaytime);
	}
}
