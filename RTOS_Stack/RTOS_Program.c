/*
 * RTOS_Program.c
 *
 *  Created on: Jan 3, 2022
 *      Author: gerges
 */

#include"../LIB/LSTD_TYPES.h"
#include"../MCAL/TIMER/TIMER_Interface.h"
#include"../MCAL/MGIE/MGIE_Interface.h"
#include"RTOS_Private.h"
#include"RTOS_Config.h"

Task_t Tasks_Stack[NUM_OF_TASKS]={{NULL}};

void RTOS_VidInit(void)
{
	u8 Loc_u8SysTickCounts;
	/* Set CallBack Function To CTC Interrupt*/
	TIMER0_VidCTC_SetCallBack(&RTOS_VidSchedular);
	/* Set CTC Register Value */
	Loc_u8SysTickCounts=(SYSTICK_MS*RTOS_FCPU_KHZ)/RTOS_TIMER_Prescaler;
	TIMER0_VidSetCTCValue(Loc_u8SysTickCounts);
	/* Timer Initialization --> CTC Mode*/
	TIMER0_VidInit();
	/* Enable To GI */
	MGIE_VidEnable();
}
void RTOS_VidCreateTask(void(*pv_PtrToFun)(void),u32 Copy_u32Periodicity,u8 Copy_u8Priority)
{
	Tasks_Stack[Copy_u8Priority].Function=pv_PtrToFun;
	Tasks_Stack[Copy_u8Priority].Periodicity=Copy_u32Periodicity;
}
void RTOS_VidSchedular(void)
{
	static u32  SysTickCount=0;
	u8 Loc_u8Count;

	SysTickCount++;

	for(Loc_u8Count=0;Loc_u8Count<NUM_OF_TASKS;Loc_u8Count++)
	{
		if(SysTickCount%Tasks_Stack[Loc_u8Count].Periodicity==0)
		{
			Tasks_Stack[Loc_u8Count].Function();
		}
		else
		{
			/*Do Nothing*/
		}
	}
}
