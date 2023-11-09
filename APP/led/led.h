#ifndef _led_H
#define _led_H

#include "system.h"

/*  LED时钟端口、引脚定义 */
#define LED1_PORT 			GPIOB   
#define LED1_PIN 			GPIO_Pin_0
#define LED1_PORT_RCC		RCC_APB2Periph_GPIOB

#define LED2_PORT 			GPIOB   
#define LED2_PIN 			GPIO_Pin_6
#define LED2_PORT_RCC		RCC_APB2Periph_GPIOB


#define LED1 PBout(0)  	
#define LED2 PBout(6)  	


void LED_Init(void);


#endif
