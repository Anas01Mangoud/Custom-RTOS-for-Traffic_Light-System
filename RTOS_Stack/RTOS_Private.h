/*
 * RTOS_Private.h
 *
 *  Created on: Jan 3, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_PRIVATE_H_
#define RTOS_STACK_RTOS_PRIVATE_H_

#define RTOS_TIMER_Prescaler 1024

typedef struct
{
	void(*Function)(void);
	u32 Periodicity;
	u8 Priority;
}Task_t;

void RTOS_VidSchedular(void);

#endif /* RTOS_STACK_RTOS_PRIVATE_H_ */
