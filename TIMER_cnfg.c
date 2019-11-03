/*
 * TIMER_cnfg.c
 *
 *  Created on: Sep 24, 2019
 *      Author: HOBA
 */

#include "TIMER_cnfg.h"



TIMER_cnfg_t TIMER_cnfg_arr[NUM_OF_TIMERS] =
{		
		
			
		//All below Configurations passed the test and works properly 
		{TIMER0,CTC_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,NOT_INITIALIZED},
		{TIMER1,CTC_MODE,NORMAL,INTERRUPT,NO_ICU_USED,PRESCALER8,INITIALIZED},
		{TIMER2,CTC_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,NOT_INITIALIZED}
		
		
		/*
		//All below Configurations passed the test and works properly 
		{TIMER0,NORMAL_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,INITIALIZED},
		{TIMER1,CTC_MODE,NORMAL,INTERRUPT,NO_ICU_USED,PRESCALER1024,INITIALIZED},
		{TIMER2,CTC_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,INITIALIZED}
		*/
		
		/*
		//All below Configurations passed the test and works properly except for Timer 2 (Normal mode with interrupt)
		{TIMER0,NORMAL_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,INITIALIZED},
		{TIMER1,NORMAL_MODE,NORMAL,INTERRUPT,NO_ICU_USED,PRESCALER1024,INITIALIZED},
		{TIMER2,NORMAL_MODE,NORMAL,INTERRUPT,NA,PRESCALER1024 ,INITIALIZED}
		*/

		
		/*
		//All below Configurations passed the test and works properly 
		{TIMER0,NORMAL_MODE,TOGGLE,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED},
		{TIMER1,NORMAL_MODE,TOGGLE,NO_INTERRUPT,NO_ICU_USED,PRESCALER1024,INITIALIZED},
		{TIMER2,NORMAL_MODE,TOGGLE,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED}
		*/
		

		/*
		//All below Configurations passed the test and works properly 
		{TIMER0,CTC_MODE,NORMAL,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED},
		{TIMER1,CTC_MODE,NORMAL,NO_INTERRUPT,NO_ICU_USED,PRESCALER1024,INITIALIZED},
		{TIMER2,CTC_MODE,NORMAL,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED}
		*/
		
		/*
		//All below Configurations passed the test and works properly 			
		{TIMER0,CTC_MODE,TOGGLE,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED},
		{TIMER1,CTC_MODE,TOGGLE,NO_INTERRUPT,NO_ICU_USED,PRESCALER1024,INITIALIZED},
		{TIMER2,CTC_MODE,TOGGLE,NO_INTERRUPT,NA,PRESCALER1024 ,INITIALIZED}
		*/
};