/*
 * main.c
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "../MCAL/DIO/DIO_Init.h"
#include "util/delay.h"

void main(){

	/*
	 * DDRA = 0x01
	 * PORTA= 0x01
	 * */

	MDIO_voidSetPortDirection(PORTA,0x01);


	while(1){
		MDIO_voidSetPortValue(PORTA,0x01);
		_delay_ms(500);
		MDIO_voidSetPortValue(PORTA,0x00);
		_delay_ms(500);
}

}
