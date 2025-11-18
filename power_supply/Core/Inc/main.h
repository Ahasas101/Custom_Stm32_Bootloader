/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CFG1_Pin GPIO_PIN_0
#define CFG1_GPIO_Port GPIOA
#define CFG2_Pin GPIO_PIN_1
#define CFG2_GPIO_Port GPIOA
#define CFG3_Pin GPIO_PIN_2
#define CFG3_GPIO_Port GPIOA
#define MOS1_Pin GPIO_PIN_3
#define MOS1_GPIO_Port GPIOA
#define MOS2_Pin GPIO_PIN_4
#define MOS2_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_5
#define BUTTON1_GPIO_Port GPIOA
#define BUTTON1_EXTI_IRQn EXTI4_15_IRQn
#define BUTTON2_Pin GPIO_PIN_6
#define BUTTON2_GPIO_Port GPIOA
#define BUTTON2_EXTI_IRQn EXTI4_15_IRQn
#define BUTTON3_Pin GPIO_PIN_7
#define BUTTON3_GPIO_Port GPIOA
#define BUTTON3_EXTI_IRQn EXTI4_15_IRQn

/* USER CODE BEGIN Private defines */
#define ON		1
#define OFF		0


typedef enum{
	CFGSET = GPIO_PIN_SET,
	CFGRESET = GPIO_PIN_RESET
}decoy_cfg_pin;

typedef enum{
	Mode1,
	Mode2
}mode_type;

typedef enum{
	Five,
	Nine,
	Twelve,
	Fifteen,
	Twenty
}voltage_level;

typedef struct{
	decoy_cfg_pin cfg1;
	decoy_cfg_pin cfg2;
	decoy_cfg_pin cfg3;
}config_pins_state;

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
