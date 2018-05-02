#ifndef QTRSensors_h
#define QTRSensors_h

#include "stdint.h"
#include "stdlib.h"
#include "time.h"
#include "Global.h"
#include "stm32f4xx_hal.h"

#define QTR_EMITTERS_OFF 0
#define QTR_EMITTERS_ON 1
#define QTR_EMITTERS_ON_AND_OFF 2

#define QTR_NO_EMITTER_PIN  255

#define QTR_MAX_SENSORS 16

extern GPIO_InitTypeDef GPIO_InitStruct;


extern uint32_t *calibratedMinimumOn;
extern uint32_t *calibratedMaximumOn;
extern uint32_t *calibratedMinimumOff;
extern uint32_t *calibratedMaximumOff;

extern uint8_t *_pins;
extern uint8_t _numSensors;
extern uint8_t _emitterPin;
extern uint32_t _maxValue; // the maximum value returned by this function
extern int32_t _lastValue;

extern const uint16_t QTR_PIN[5];

void Init_QTRSensor(unsigned char numSensors,uint32_t timeout);

void calibrate(uint8_t readMode);
void calibrateOnOrOff(uint32_t **calibratedMinimum,
                                        uint32_t **calibratedMaximum,
                                        uint8_t readMode);
void read(uint32_t *sensor_values, uint8_t readMode);
void emittersOff(void);
void emittersOn(void);
void readPrivate(uint32_t *sensor_values);
#endif
