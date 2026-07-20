# Espressif Arduino-FOC Fork

[![Component Registry](https://components.espressif.com/components/espressif/arduino-foc/badge.svg)](https://components.espressif.com/components/espressif/arduino-foc)

This repository is an ESP-IDF integration of the upstream [Arduino-FOC](https://github.com/simplefoc/Arduino-FOC) control algorithms. This branch is based on [Arduino-FOC v2.4.0](https://github.com/simplefoc/Arduino-FOC/releases/tag/v2.4.0) and is packaged as `espressif/arduino-foc` version `2.4.0`.

The component provides the platform-independent BLDC, stepper, hybrid-stepper, sensor, current-sense, communication, and control-loop implementations. Use it together with [espressif/esp_simplefoc](https://components.espressif.com/components/espressif/esp_simplefoc), which provides the ESP-IDF hardware drivers and optimized math functions.

## Supported targets

The algorithm component supports ESP-IDF targets supported by its hardware integration. `espressif/esp_simplefoc` v1.3.0 lists ESP32, ESP32-S2, ESP32-S3, ESP32-C3, ESP32-C6, and ESP32-H2.

## Add to a project

Normally, add the complete ESP-IDF hardware integration. It pulls `espressif/arduino-foc` as a public dependency:

```sh
idf.py add-dependency "espressif/esp_simplefoc^1.3.0"
```

The equivalent project manifest entry is:

```yaml
dependencies:
  espressif/esp_simplefoc: "^1.3.0"
```

To depend directly on the algorithm component instead:

```sh
idf.py add-dependency "espressif/arduino-foc^2.4.0"
```

## Documentation

* [SimpleFOC documentation](https://docs.simplefoc.com/)
* [ESP-IDF SimpleFOC user guide](https://docs.espressif.com/projects/esp-iot-solution/en/latest/motor/foc/esp_simplefoc.html)
* [Upstream Arduino-FOC v2.4.0](https://github.com/simplefoc/Arduino-FOC/tree/v2.4.0)
