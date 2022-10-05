#include "pwm.h"

void pwm_set(TIM_TypeDef* TIMx, uint32_t value)
{
    TIMx->CCR1 = value;  // Setting PWM duty cycle
}
