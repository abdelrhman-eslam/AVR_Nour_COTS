/*
 * Bit_Math.h
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Reg, bitnum)       (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)       (Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    (Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       ((Reg>>bitnum)& 0x01)
#define SET_BYTE(Reg,value)        ( Reg = value )

#define assign_bit(reg,bitno,value)	do{ CLR_BIT(reg,bitno); reg|=((value)<<bitno); }while(0)

#define set_nibbleLow(reg)	reg=reg|0b00001111
#define clr_nibbleLow(reg)	reg=reg&0b11110000
#define toggle_nibbleLow(reg)	reg=reg^0b00001111
#define assign_nibbleLow(reg,value)	do{ clr_nibbleLow(reg); reg=reg|value; }while(0)


#define set_nibbleHigh(reg)	reg=reg|0b11110000
#define clr_nibbleHigh(reg)	reg=reg&0b00001111
#define toggle_nibbleHigh(reg)	reg=reg^0b11110000
#define assign_nibbleHigh(reg,value)	do{ clr_nibbleHigh(reg); reg=reg|value<<4; }while(0)

#define get_bit(reg,bitno)	( reg&(1<<bitno) )>>bitno
#define get_nibbleLow(reg)	reg&0b00001111
#define get_nibbleHigh(reg)	(reg&0b11110000)>>4

#define cir_shiftRight(reg,shiftno)	reg= (reg<<( sizeof(reg)*8 -shiftno)) | (reg>>shiftno)
#define cir_shiftLeft(reg,shiftno)	reg= (reg>>( sizeof(reg)*8 -shiftno)) | (reg<<shiftno)

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0) Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif /* BIT_MATH_H_ */
