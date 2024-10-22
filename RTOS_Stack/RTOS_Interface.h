/*
 * RTOS_Interface.h
 *
 *  Created on: Jan 3, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_INTERFACE_H_
#define RTOS_STACK_RTOS_INTERFACE_H_

void RTOS_VidInit(void);
void RTOS_VidCreateTask(void(*pv_PtrToFun)(void),u32 Copy_u32Periodicity,u8 Copy_u8Priority);


#endif /* RTOS_STACK_RTOS_INTERFACE_H_ */
