#ifndef _MOTOR_H
#define _MOTOR_H



//Motor 0
#define A1(state) (state>0) ? GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_4, GPIO_PIN_4) :GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_4, 0)  //A+
#define B1(state) (state>0) ? GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, GPIO_PIN_6) :GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, 0)  //B+
#define A2(state) (state>0) ? GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, GPIO_PIN_5) :GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, 0)  //A-
#define B2(state) (state>0) ? GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_7, GPIO_PIN_7) :GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_7, 0)  //B-


void Motor_Configure(void);

//Motor0
void SetMotor_Four_Motor0(uint8_t Direction);
void SetMotor_Eight_Motor0(uint8_t Direction);

#endif
