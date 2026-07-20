#include <float.h>

#include "foc_utils.h"

// ESP-IDF's esp_simplefoc component provides optimized implementations for
// the remaining math helpers. These weak fallbacks cover the helpers added in
// SimpleFOC v2.4.0 while allowing a future optimized implementation to replace
// them at link time.
__attribute__((weak)) void _sincos(float angle, float *sine, float *cosine)
{
    *sine = _sin(angle);
    *cosine = _cos(angle);
}

__attribute__((weak)) float _atan2(float y, float x)
{
    const float abs_y = fabsf(y);
    const float abs_x = fabsf(x);
    const float min_abs = abs_x < abs_y ? abs_x : abs_y;
    const float max_abs = abs_x > abs_y ? abs_x : abs_y;
    const float ratio = min_abs / (max_abs + FLT_MIN);
    const float ratio_squared = ratio * ratio;

    float result = ((-0.0464964749f * ratio_squared + 0.15931422f) * ratio_squared
                    - 0.327622764f) * ratio_squared * ratio + ratio;
    if (abs_y > abs_x) {
        result = 1.57079637f - result;
    }
    if (x < 0.0f) {
        result = 3.14159274f - result;
    }
    if (y < 0.0f) {
        result = -result;
    }

    return result;
}
