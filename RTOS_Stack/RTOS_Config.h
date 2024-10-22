/*
 * RTOS_Config.h
 *
 *  Created on: Jan 3, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_CONFIG_H_
#define RTOS_STACK_RTOS_CONFIG_H_

/*Range 0.5:16 ms
 * F_CPU=16MHZ and Prescaler=1024*/
/*Range 1:32 ms
 * F_CPU=8MHZ and Prescaler=1024*/
/*Range 1:250 ms
 * F_CPU=1MHZ and Prescaler=1024*/

#define RTOS_FCPU_KHZ    8000
#define SYSTICK_MS       1

#define NUM_OF_TASKS     3

#endif /* RTOS_STACK_RTOS_CONFIG_H_ */
