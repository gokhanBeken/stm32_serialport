#include "stm32f4xx.h"
#include <stdio.h>

#include <stm32f4xx_gpio.h>
#include <stm32f4xx_rcc.h>
#include "misc.h"
#include <stm32f4xx_usart.h>


GPIO_InitTypeDef GPIO_InitStructure; //GPIO icin
NVIC_InitTypeDef NVIC_InitStructure;


void Delay(__IO uint32_t nCount);

void init_GPIO(void);

