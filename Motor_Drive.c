/*
 * Motor_Drive.c
 *
 * Created: 9/27/2020 2:54:54 AM
 *  Author: monad
 */ 
#include "Motor_Drive.h"
#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
void Motor_Drive_Init(void)
{
	//OCR0 =63; //25 % DUTY CYCLE
	TCNT_CMP_REG=63;
	//TCCR0 |=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS01)|(1<<CS00);
	SetBIT(TCNT_Ctrl_REG,Prescl_0);
	SetBIT(TCNT_Ctrl_REG,Prescl_1);
	SetBIT(TCNT_Ctrl_REG,WaveGenbit_0);
	SetBIT(TCNT_Ctrl_REG,WaveGenbit_1);
	SetBIT(TCNT_Ctrl_REG,CMP_MATCH_OUT_1);
	
}
void Motor_Drive_FUNC(void)
{
	PORTC |=(1<<3);
	PORTC &=~(1<<4);
	_delay_ms(1000);
	PORTC &=~(1<<3);
	PORTC &=~(1<<4);
	_delay_ms(3000);
	PORTC &=~(1<<3);
	PORTC |=(1<<4);
	_delay_ms(1000);
	
}