#ifndef __DELAY_H
#define __DELAY_H

/* Includes ------------------------------------------------------------------*/

#include "stm32f4xx_hal.h"

/* Exported functions prototypes ---------------------------------------------*/

void tim_set_peak (TIM_TypeDef* TIMx, uint16_t period);   // Setting maximum value

/* Private defines -----------------------------------------------------------*/

#define F_AHB 16000000UL                // SysTick AHB clocking frequency

#define TOP_MS	F_AHB / 1000UL - 1UL   // Count top for ms

#define TIM_SET_UG(TIMx) TIMx->EGR |= TIM_EGR_UG      // Set update generation flag

#define TIM_RESET_UIF(TIMx) TIMx->SR &= ~TIM_SR_UIF  // Reset update interrupt flag

#define True 1

#define False 0

#define DELAY_VALUE_LED_ON 200  // Set delay value when led enable

#define DELAY_VALUE_LED_OFF 100 // Set delay value when led disable

#endif /* __DELAY_H */
