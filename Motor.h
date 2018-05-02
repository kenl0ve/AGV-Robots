#ifndef		__MOTOR_H
#define		__MOTOR_H

#define STRAIGHT_LINE_DEFAUT_SPEED	170			//rpm

#include "global.h"
#include "stdint.h"
#include "stm32f4xx.h"
#include "stdlib.h"

typedef struct Motor
{
	int8_t Kp;
	int8_t Ki;
	int8_t Kd;
	int16_t _lastError;
	
	int32_t encoder_position;
	
	int16_t speed;
	
	uint16_t pwm;
	
	volatile uint8_t _direct;
		
} Motor;

typedef struct OneSide_Motors
{
	struct Motor Front_Motor;
	struct Motor Behind_Motor;

	uint16_t speed;
	
}OneSide_Motors;

void Init_Motors(struct OneSide_Motors *Left_Motors, struct OneSide_Motors *Right_Motors);

/*void Init_Motors(struct Motor Motor1,struct Motor Motor2, struct Motor Motor3, struct Motor Motor4,
									struct OneSide_Motors Right_Motors, struct OneSide_Motors Left_Motors);*/
void PWM_Motor(uint16_t left_font,
							uint16_t left_behind,
							uint16_t right_font,
							uint16_t right_behind);
void PWM_Motors(unsigned char chieu,struct OneSide_Motors left, struct OneSide_Motors right);

//void 

#endif
