/*
 * GPT_Lconfig.c
 *
 * Created: 20/11/2024 4:45:01 PM
 *  Author: Saleh_Almallah
 */


#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] = 
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};