#ifndef __LEDS_H_
#define __LEDS_H_

#include "main.h"

#define	 USER_LED1		(1U<<0)  /*Green Led*/
#define  USER_LED2		(1U<<7)  /*Blue Led*/
#define  USER_LED3		(1U<<14) /*Red Led*/
#define	 USER_LED4		(1U<<15) /*Custom Led*/

#define GREEN_LED		USER_LED1
#define BLUE_LED		USER_LED2
#define RED_LED   		USER_LED3
#define CUSTOM_LED		USER_LED4

#define LEDS_PORT		GPIOB


void leds_init(void);
void led_on(uint32_t led);
void led_off(uint32_t led);


#endif
