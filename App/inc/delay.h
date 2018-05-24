
#ifndef __DELAY_H
#define __DELAY_H

#include "delay.h"


#ifdef _DELAY_C_
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL uint32_t uwTick;




#undef GLOBAL 

void SysTick_init();
uint32_t GetTick();




#endif


