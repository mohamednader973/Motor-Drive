/*
 * Motor_Drive.h
 *
 * Created: 9/27/2020 2:55:23 AM
 *  Author: monad
 */ 


#ifndef MOTOR_DRIVE_H_
#define MOTOR_DRIVE_H_
#define TCNT_Ctrl_REG (*((volatile unsigned char*)0x53))             //TCCR0
#define TCNT_REG      (*((volatile unsigned char*)0x52))            //TCNT0
#define TCNT_INTMSK   (*((volatile unsigned char*)0x59))           //TIMSK
#define TCNT_CMP_REG   (*((volatile unsigned char*)0x5C))          //OCR0
#define SetBIT(REG,BIT)    REG |=(1<<BIT)
#define ClearBIT(REG,BIT)  REG &=~(1<<BIT)
#define Prescl_2           2
#define Prescl_1           1
#define Prescl_0           0
#define WaveGenbit_0       6
#define CMP_MATCH_OUT_0    4
#define CMP_MATCH_OUT_1    5
#define WaveGenbit_1       3
#define Timer_INT_EN       0
void Motor_Drive_Init(void);
void Motor_Drive_FUNC(void);
#endif /* MOTOR_DRIVE_H_ */