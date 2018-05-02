#ifndef		__CONTROLLER_H
#define		__CONTROLLER_H

#include "Motor.h"

typedef struct PID_POSITION
{
	int8_t Kp;
	int8_t Ki;
	int8_t Kd;
	int16_t _lastError_position;
	
	uint16_t referent_position;
}PID_POSITION;


void Init_Algorithm(struct PID_POSITION* position_algorithm);

// KQ la mang 2 phan tu: speed ben trai, speed ben phai 
void FollowAlgorithm(int16_t _position, struct PID_POSITION* position_algorithm,
											struct OneSide_Motors *Left_Motors, struct OneSide_Motors *Right_Motors);	

void BalanceController (struct OneSide_Motors *left, struct OneSide_Motors *right);// KQ la mang 2 phan tu: pwm dc truoc, pwm dc sau ( 1 phia )

#endif
