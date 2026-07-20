#ifndef ESP_PLATFORM_COMPAT_H
#define ESP_PLATFORM_COMPAT_H

#include "esp_platform.h"

#ifdef __cplusplus
extern "C" {
#endif

void noInterrupts(void);
void interrupts(void);

#ifdef __cplusplus
}
#endif

#endif
