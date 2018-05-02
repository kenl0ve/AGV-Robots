#ifndef		__GLOBAL_H
#define		__GLOBAL_H


#define PIN_LOW(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_RESET);
#define PIN_HIGH(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_SET);

#define DIRECT_BACKWARD			0
#define DIRECT_ADVANCE			1

#define MANUAL_MODE		0
#define AUTO_MODE			1

#define NUM_SENSORS   5     // number of sensors used
#define TIMEOUT       2500  // waits for 2500 microseconds for sensor outputs to go low

// PORT A
#define PPM_PORT		GPIOA
#define PPM_PIN	GPIO_PIN_5


// PORT B
#define QTR_PORT		GPIOB
#define QTR_PIN_EN	GPIO_PIN_0
#define QTR_PIN_1 	GPIO_PIN_1
#define QTR_PIN_2 	GPIO_PIN_2
#define QTR_PIN_3 	GPIO_PIN_3
#define QTR_PIN_4 	GPIO_PIN_4
#define QTR_PIN_5 	GPIO_PIN_5

#define LED_PORT		GPIOB
#define LED_GREEN		GPIO_PIN_6		
#define LED_RED		  GPIO_PIN_7		
#define LED_BLUE		GPIO_PIN_8		
#define LED_YELLOW	GPIO_PIN_9		
#define LED_WHITE		GPIO_PIN_10	


// PORT C
#define UART_PORT		GPIOC
#define UART_PIN_TX	GPIO_PIN_6
#define UART_PIN_RX	GPIO_PIN_7


// PORT D
#define BUT_PORT		GPIOD
#define BUT_PIN_1		GPIO_PIN_0
#define BUT_PIN_2		GPIO_PIN_1
#define BUT_PIN_3		GPIO_PIN_2
#define BUT_PIN_4		GPIO_PIN_3

#define DIRECT_PORT			GPIOD
#define DIRECT_PIN_1A		GPIO_PIN_4
#define DIRECT_PIN_1B		GPIO_PIN_5
#define DIRECT_PIN_2A		GPIO_PIN_6
#define DIRECT_PIN_2B		GPIO_PIN_7
#define DIRECT_PIN_3A		GPIO_PIN_8
#define DIRECT_PIN_3B		GPIO_PIN_9
#define DIRECT_PIN_4A		GPIO_PIN_10
#define DIRECT_PIN_4B		GPIO_PIN_11

#define PWM_PORT		GPIOD
#define PWM_PIN_1		GPIO_PIN_12
#define PWM_PIN_2		GPIO_PIN_13
#define PWM_PIN_3		GPIO_PIN_14
#define PWM_PIN_4		GPIO_PIN_15


// PORT E
#define ENCO_PORT			GPIOE
#define ENCO_PIN_1A		GPIO_PIN_8
#define ENCO_PIN_2A		GPIO_PIN_9
#define ENCO_PIN_3A		GPIO_PIN_10
#define ENCO_PIN_4A		GPIO_PIN_11
#define ENCO_PIN_1B		GPIO_PIN_12
#define ENCO_PIN_2B		GPIO_PIN_13
#define ENCO_PIN_3B		GPIO_PIN_14
#define ENCO_PIN_4B		GPIO_PIN_15


////////

#endif
