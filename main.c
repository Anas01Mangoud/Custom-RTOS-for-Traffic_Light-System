/*
 * main.c
 *
 *  Created on: Jan 3, 2022
 *      Author: gerges
 */

#include"LIB/LSTD_TYPES.h"

#include"MCAL/MDIO/MDIO_Interface.h"

#include"RTOS_Stack/RTOS_Interface.h"

void App_LED1(void);
void App_LED2(void);
void App_LED3(void);

int main(void)
{
	/*DIO Pins Initialization*/
	MDIO_Error_State_SetPinDirection(PIN0,MDIO_PORTD,PIN_OUTPUT);
	MDIO_Error_State_SetPinDirection(PIN1,MDIO_PORTD,PIN_OUTPUT);
	MDIO_Error_State_SetPinDirection(PIN2,MDIO_PORTD,PIN_OUTPUT);

	/* Create Tasks*/
	RTOS_VidCreateTask(App_LED1,1000,0);
	RTOS_VidCreateTask(App_LED2,2000,1);
	RTOS_VidCreateTask(App_LED3,3000,2);

	/*RTOS Initialization*/
	RTOS_VidInit();

	while(1)
	{

	}
	return 0;
}
void App_LED1(void)
{
	static u8 Loc_u8Flag=0;
	if(Loc_u8Flag==0)
	{
		MDIO_Error_State_SetPinValue(PIN0,MDIO_PORTD,PIN_HIGH);
		Loc_u8Flag=1;
	}
	else
	{
		MDIO_Error_State_SetPinValue(PIN0,MDIO_PORTD,PIN_LOW);
		Loc_u8Flag=0;
	}
}
void App_LED2(void)
{
	static u8 Loc_u8Flag=0;
	if(Loc_u8Flag==0)
	{
		MDIO_Error_State_SetPinValue(PIN1,MDIO_PORTD,PIN_HIGH);
		Loc_u8Flag=1;
	}
	else
	{
		MDIO_Error_State_SetPinValue(PIN1,MDIO_PORTD,PIN_LOW);
		Loc_u8Flag=0;
	}
}
void App_LED3(void)
{
	static u8 Loc_u8Flag=0;
	if(Loc_u8Flag==0)
	{
		MDIO_Error_State_SetPinValue(PIN2,MDIO_PORTD,PIN_HIGH);
		Loc_u8Flag=1;
	}
	else
	{
		MDIO_Error_State_SetPinValue(PIN2,MDIO_PORTD,PIN_LOW);
		Loc_u8Flag=0;
	}
}
