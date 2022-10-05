#ifndef __PWM_H
#define __PWM_H

/* Includes ------------------------------------------------------------------*/

#include "stm32f4xx_hal.h"

/* Exported macro ------------------------------------------------------------*/

#define PWM_MIN 0UL    // Minimum value of PWM control

#define PWM_MAX 500UL  // Maximum value of PWM control

#define PWM_STEP 50UL  // Step 10 percent pitch duty cycle

#define PWM_VALUE_LED_OFF 0 // Set pulse duty cycle in zero

/* Exported functions prototypes ---------------------------------------------*/

void pwm_set(TIM_TypeDef* TIMx, uint32_t value);  // Set pulse duty cycle value


#endif /* __PWM_H */
