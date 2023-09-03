/*******************************************************************************
* @file           : led.c
* @brief          :
* @created time	  : Sep, 2023
* @author         : Haoran
******************************************************************************
* Copyright (c) 2023 UARM Artemis.
* All rights reserved.
*******************************************************************************/

#ifndef __LED_C__
#define __LED_C__

#include "main.h"
#include "led.h"

/* define internal vars */

/* define internal functions */

void led_init(void){
	HAL_TIM_PWM_Start(&LED1_TIM, LED1_CH_R);
	HAL_TIM_PWM_Start(&LED1_TIM, LED1_CH_G);
	HAL_TIM_PWM_Start(&LED1_TIM, LED1_CH_B);
	HAL_TIM_PWM_Start(&LED2_TIM, LED2_CH_R);
	HAL_TIM_PWM_Start(&LED2_TIM, LED2_CH_G);
	HAL_TIM_PWM_Start(&LED2_TIM, LED2_CH_B);
}
/**
  * @brief     set led bar color based on RGB channels
  * @param[in] red value
  * @param[in] green value
  * @param[in] blue value
  * @retval    None
  */
void led_set_color(uint8_t r, uint8_t g, uint8_t b){
	/* led light bar 1 set color */
	__HAL_TIM_SET_COMPARE(&LED1_TIM, LED1_CH_R, r);
	__HAL_TIM_SET_COMPARE(&LED1_TIM, LED1_CH_G, g);
	__HAL_TIM_SET_COMPARE(&LED1_TIM, LED1_CH_B, b);
	/* led light bar 2 set color */
	__HAL_TIM_SET_COMPARE(&LED2_TIM, LED2_CH_R, r);
	__HAL_TIM_SET_COMPARE(&LED2_TIM, LED2_CH_G, g);
	__HAL_TIM_SET_COMPARE(&LED2_TIM, LED2_CH_B, b);
}

#endif /*__LED_C__*/
