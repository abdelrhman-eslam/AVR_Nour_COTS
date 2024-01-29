/*
 * GIE.c
 *
 *  Created on: Jan 29, 2024
 *      Author: ENG.AbdelrhmanEslam
 */
#include "GIE_Init.h"

void MGIR_voidEnable()
{
	SET_BIT(GIE_SREG_REG,7);
}

void MGIR_voidDisEnable()
{
	CLR_BIT(GIE_SREG_REG,7);
}
