#ifndef PLATFORM_CONFIG_H
#define PLATFORM_CONFIG_H

#include <stdint.h>

#define AIRDATA_TARGET_STM32H755          (1U)

#define TASK_SENSOR_PERIOD_MS             (10U)
#define TASK_AIRDATA_PERIOD_MS            (20U)
#define TASK_DRONECAN_PERIOD_MS           (20U)
#define TASK_HEALTH_PERIOD_MS             (100U)

#define AIRDATA_SEA_LEVEL_PRESSURE_PA     (101325.0f)
#define AIRDATA_SEA_LEVEL_DENSITY_KGM3    (1.225f)

#define STATIC_SENSOR_MISMATCH_PA         (150.0f)
#define AIRDATA_LPF_ALPHA                 (0.15f)
#define AIRDATA_MOVING_AVG_WINDOW         (8U)

#endif
