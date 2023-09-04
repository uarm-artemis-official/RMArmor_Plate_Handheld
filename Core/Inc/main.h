/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_B_Pin GPIO_PIN_0
#define LED1_B_GPIO_Port GPIOA
#define LED1_G_Pin GPIO_PIN_1
#define LED1_G_GPIO_Port GPIOA
#define LED1_R_Pin GPIO_PIN_2
#define LED1_R_GPIO_Port GPIOA
#define SW_Pin GPIO_PIN_10
#define SW_GPIO_Port GPIOB
#define SW_EXTI_IRQn EXTI15_10_IRQn
#define LED2_R_Pin GPIO_PIN_6
#define LED2_R_GPIO_Port GPIOB
#define LED2_G_Pin GPIO_PIN_7
#define LED2_G_GPIO_Port GPIOB
#define LED2_B_Pin GPIO_PIN_8
#define LED2_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim4;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
