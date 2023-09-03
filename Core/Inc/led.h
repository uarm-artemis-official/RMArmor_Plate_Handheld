/*******************************************************************************
* @file           : led.h
* @brief          : any header template
* @created time	  : Sep, 2023
* @author         : Haoran
******************************************************************************
* Copyright (c) 2023 UARM Artemis.
* All rights reserved.
*******************************************************************************/


#ifndef __LED_H__
#define __LED_H__

#include "main.h"


/* define general declarations for gimbal task here */
#define LED1_TIM htim2
#define LED1_CH_R TIM_CHANNEL_1
#define LED1_CH_G TIM_CHANNEL_2
#define LED1_CH_B TIM_CHANNEL_3

#define LED2_TIM htim4
#define LED2_CH_R TIM_CHANNEL_1
#define LED2_CH_G TIM_CHANNEL_2
#define LED2_CH_B TIM_CHANNEL_3




/* define user structure here */
typedef enum{
		RED,
		BLUE
}LED_Color;

/* extern global variables here */


/* define user created variables here */



/* functions declaration here */
void led_init(void);
void led_set_color(uint8_t r, uint8_t g, uint8_t b);






#endif /*__ALED_H__*/
