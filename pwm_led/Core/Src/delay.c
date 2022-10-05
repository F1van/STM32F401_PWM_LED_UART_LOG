#include "delay.h"

void tim_set_peak (TIM_TypeDef* TIMx, uint16_t period)
{
    TIMx->ARR = period - 1;
}
