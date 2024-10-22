/*
 * TIMER_Config.h
 *
 *  Created on: Nov 18, 2021
 *      Author: gerges
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

/*Timer Prescaler Options:
 * 0- TIMER_STOPPED
 * 1- TIMER_NO_PRESCALER
 * 2- TIMER_8_PRESCALER
 * 3- TIMER_64_PRESCALER
 * 4- TIMER_256_PRESCALER
 * 5- TIMER_1024_PRESCALER
 * 6- TIMER_EXTERNAL_CLOCK_SOURCE_FALLING_EDGE
 * 7- TIMER_EXTERNAL_CLOCK_SOURCE_RISING_EDGE
 */
#define TIMER_SET_PRESCALER   TIMER_1024_PRESCALER

/*TIMER0 Modes Options:
 * 1- TIMER0_NORMAL_MODE
 * 2- TIMER0_CTC_MODE
 * 3- TIMER0_PHASECORRECT_PWM_MODE
 * 4- TIMER0_FAST_PWM_MODE
 */

#define TIMER0_SET_MODE   TIMER0_CTC_MODE

/*Timer0 CTC Interrupt Options:
 * 1- TIMER0_CTC_INTERRUPT_ENABLED
 * 2- TIMER0_CTC_INTERRUPT_DISABLED
 */

#define TIMER0_SET_CTC_INTERRUPT   TIMER0_CTC_INTERRUPT_ENABLED

/*Timer0 CTC OC0 PIN Options:
 * 1- TIMER0_OC0_PIN_DISCONNECTED
 * 2- TIMER0_OC0_PIN_TOGGLE
 * 3- TIMER0_OC0_PIN_SET
 * 4- TIMER0_OC0_PIN_CLR
 */
#define TIMER0_SET_OC0_PIN_MODE  TIMER0_OC0_PIN_DISCONNECTED

/*Timer0 PWM MODE Options:
 * 1-TIMER0_NON_INVERTING_PWM
 * 2- TIMER0_INVERTING_PWM
 */
#define TIMER0_SET_PWM_MODE  TIMER0_NON_INVERTING_PWM






#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
