/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f0xx_hal.h"

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
#define LCD_RS_Pin GPIO_PIN_13
#define LCD_RS_GPIO_Port GPIOC
#define LCD_WR_Pin GPIO_PIN_14
#define LCD_WR_GPIO_Port GPIOC
#define LCD_RD_Pin GPIO_PIN_15
#define LCD_RD_GPIO_Port GPIOC
#define LCD_CS_Pin GPIO_PIN_0
#define LCD_CS_GPIO_Port GPIOF
#define LCD_Reset_Pin GPIO_PIN_1
#define LCD_Reset_GPIO_Port GPIOF
#define GPIO6_Pin GPIO_PIN_0
#define GPIO6_GPIO_Port GPIOA
#define GPIO7_Pin GPIO_PIN_1
#define GPIO7_GPIO_Port GPIOA
#define GPIO8_Pin GPIO_PIN_2
#define GPIO8_GPIO_Port GPIOA
#define GPIO3_Pin GPIO_PIN_3
#define GPIO3_GPIO_Port GPIOA
#define DB0_Pin GPIO_PIN_0
#define DB0_GPIO_Port GPIOB
#define DB1_Pin GPIO_PIN_1
#define DB1_GPIO_Port GPIOB
#define DB2_Pin GPIO_PIN_2
#define DB2_GPIO_Port GPIOB
#define DB10_Pin GPIO_PIN_10
#define DB10_GPIO_Port GPIOB
#define DB11_Pin GPIO_PIN_11
#define DB11_GPIO_Port GPIOB
#define DB12_Pin GPIO_PIN_12
#define DB12_GPIO_Port GPIOB
#define DB13_Pin GPIO_PIN_13
#define DB13_GPIO_Port GPIOB
#define DB14_Pin GPIO_PIN_14
#define DB14_GPIO_Port GPIOB
#define DB15_Pin GPIO_PIN_15
#define DB15_GPIO_Port GPIOB
#define GPIO2_Pin GPIO_PIN_8
#define GPIO2_GPIO_Port GPIOA
#define GPIO2_EXTI_IRQn EXTI4_15_IRQn
#define DB3_Pin GPIO_PIN_3
#define DB3_GPIO_Port GPIOB
#define DB4_Pin GPIO_PIN_4
#define DB4_GPIO_Port GPIOB
#define DB5_Pin GPIO_PIN_5
#define DB5_GPIO_Port GPIOB
#define DB6_Pin GPIO_PIN_6
#define DB6_GPIO_Port GPIOB
#define DB7_Pin GPIO_PIN_7
#define DB7_GPIO_Port GPIOB
#define DB8_Pin GPIO_PIN_8
#define DB8_GPIO_Port GPIOB
#define DB9_Pin GPIO_PIN_9
#define DB9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
