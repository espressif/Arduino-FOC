#include "esp_platform_compat.h"

#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"

static portMUX_TYPE simplefoc_interrupt_mux = portMUX_INITIALIZER_UNLOCKED;

__attribute__((weak)) void noInterrupts(void)
{
    portENTER_CRITICAL(&simplefoc_interrupt_mux);
}

__attribute__((weak)) void interrupts(void)
{
    portEXIT_CRITICAL(&simplefoc_interrupt_mux);
}
