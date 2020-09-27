/*
 * Timer_HBridge_MotorDrive.c
 *
 * Created: 9/27/2020 2:41:30 AM
 * Author : monad
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "Motor_Drive.h"
int main(void)
{
	DDRC |=(1<<3)|(1<<4);
	DDRB |=(1<<3);
	Motor_Drive_Init();
    /* Replace with your application code */
    while (1) 
    {
		Motor_Drive_FUNC();
    }
}

