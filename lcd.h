#ifndef		__LCDTXT_H
#define		__LCDTXT_H

#include "stm32f4xx.h"
#include "Global.h"

#define LCD16xN 

#define RS_PORT		GPIOE
#define RS_PIN		GPIO_PIN_6

#define EN_PORT		GPIOE
#define EN_PIN		GPIO_PIN_1

#define D7_PORT		GPIOE
#define D7_PIN		GPIO_PIN_5

#define D6_PORT		GPIOE
#define D6_PIN		GPIO_PIN_4

#define D5_PORT		GPIOE
#define D5_PIN		GPIO_PIN_3

#define D4_PORT		GPIOE
#define D4_PIN		GPIO_PIN_2

void lcd_init(void);
void lcd_write(uint8_t type,uint8_t data);
void lcd_puts(uint8_t x, uint8_t y, int8_t *string);
void lcd_clear(void);
#endif
