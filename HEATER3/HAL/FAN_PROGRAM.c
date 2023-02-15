/*
 * FAN_PROGRAM.c
 *
 * 
 *  Author: Hager, shorouk, Omar, Mohamed
  */ 

/* UTILES_LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

/*MCAL*/
#include "DIO_INTERFACE.h"

/*HAL*/
#include "FAN_INTERFACE.h"

void Fan_init(void)
{
	DIO_setPinDirection(DIO_PORTC,DIO_PIN5,DIO_PIN_OUTPUT);
}

void Fan_SET_ON(void)
{
	DIO_setPinValue(DIO_PORTC,DIO_PIN5,DIO_PIN_HIGH);
}

void Fan_SET_OFF(void)
{
	DIO_setPinValue(DIO_PORTC,DIO_PIN5,DIO_PIN_LOW);
}

