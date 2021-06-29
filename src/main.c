#include <stdio.h>

#include "retarget.h"
#include "stm32f7xx_hal_msp.h"

static UART_HandleTypeDef huart3;

int main(void)
{
  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();
  MX_USART3_UART_Init(&huart3);
  RetargetInit(&huart3);

  while (1)
  {
    char msg[] = "Hello, World!\r\n";

    printf("Hello, World!\r\n");
  }
}

