/*
 * HEATING_ELEMENT_PROGRAM.c
 *
 * 
 *  Author: Hager, shorouk, Omar, Mohamed
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

/*MCAL*/
#include "DIO_INTERFACE.h"

/*HAL*/
#include "HEATING_ELEMENT_INTERFACE.h"

void HEATING_ELEMENT_INIT(void)
{
	DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
}

void HEATING_ELEMENT_START(void)
{
	DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
}

void HEATING_ELEMENT_STOP(void)
{
	DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
}

void HEATING_ELEMENT_TOGGLE(void)
{
	DIO_togglePinValue(DIO_PORTC,DIO_PIN2);
}


