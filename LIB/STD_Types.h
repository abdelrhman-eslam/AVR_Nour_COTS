/*
 * STD_Types.h
 *
 *  Created on: Dec 1, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char      u8;
typedef unsigned short int u16;
typedef unsigned long  int u32;

typedef signed char        s8;
typedef signed short int   s16;
typedef signed long  int   s32;

typedef float              f32;
typedef double             f64;

typedef void(*pf)(void);

#ifndef NULL
#define NULL	((void*)0)
#endif

#endif /* STD_TYPES_H_ */
