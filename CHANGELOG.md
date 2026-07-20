# Changelog

## v2.4.0 - 2026-07-20

* Based on [Arduino-FOC v2.4.0](https://github.com/simplefoc/Arduino-FOC/releases/tag/v2.4.0).
* Add ESP-IDF integration for the v2.4.0 BLDC, stepper, and hybrid-stepper control algorithms.
* Add ESP-IDF support for the v2.4.0 inline and low-side current-sense implementations.
* Preserve the optimized math implementations supplied by `esp_simplefoc` and add fallbacks for the new `_sincos` and `_atan2` helpers.

## v2.3.0~3 - 2023-11-15

* Support all ESP chips by default (except ESP8266).

## v2.3.0~2 - 2023-10-18

* Support ESP32-C3.

## v2.3.0~1 - 2023-07-20

* Replace Arduino platform functions with `esp_platform` implementations.

## v2.3.0 - 2023-07-11

* Based on [Arduino-FOC v2.3.0](https://github.com/simplefoc/Arduino-FOC/releases/tag/v2.3.0).
* First release in the ESP Component Registry.
