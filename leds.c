#include "leds.h"



void leds_init(void)
{

	  GPIO_InitTypeDef   GPIO_InitStruct = {0};

	__HAL_RCC_GPIOB_CLK_ENABLE();


	GPIO_InitStruct.Pin  = GREEN_LED | BLUE_LED | RED_LED | CUSTOM_LED;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull =  GPIO_NOPULL;

	HAL_GPIO_Init(LEDS_PORT,&GPIO_InitStruct);
}


void led_on(uint32_t led)
{
	switch(led)
	{
		case GREEN_LED:
			HAL_GPIO_WritePin(LEDS_PORT,GREEN_LED,GPIO_PIN_SET);
			break;

		case BLUE_LED:
			HAL_GPIO_WritePin(LEDS_PORT,BLUE_LED,GPIO_PIN_SET);
			break;

		case RED_LED:
			HAL_GPIO_WritePin(LEDS_PORT,RED_LED,GPIO_PIN_SET);
			break;

		case CUSTOM_LED:
			HAL_GPIO_WritePin(LEDS_PORT,CUSTOM_LED,GPIO_PIN_SET);
			break;

	}
}


void led_off(uint32_t led)
{
	switch(led)
	{
		case GREEN_LED:
			HAL_GPIO_WritePin(LEDS_PORT,GREEN_LED,GPIO_PIN_RESET);
			break;

		case BLUE_LED:
			HAL_GPIO_WritePin(LEDS_PORT,BLUE_LED,GPIO_PIN_RESET);
			break;

		case RED_LED:
			HAL_GPIO_WritePin(LEDS_PORT,RED_LED,GPIO_PIN_RESET);
			break;

		case CUSTOM_LED:
			HAL_GPIO_WritePin(LEDS_PORT,CUSTOM_LED,GPIO_PIN_RESET);
			break;

	}
}
