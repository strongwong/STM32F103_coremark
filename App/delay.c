
#define _DELAY_C_

#include "stm32f10x.h"
#include "delay.h"


void SysTick_init()
{
	SysTick_Config(SystemCoreClock / 1000);
}

void SysTick_Handler()
{
	uwTick ++;
}


uint32_t GetTick()
{
	return uwTick;
}
