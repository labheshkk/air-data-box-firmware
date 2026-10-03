#ifndef SENSOR_TYPES_H
#define SENSOR_TYPES_H

#include <stdint.h>

typedef enum
{
    SENSOR_HEALTH_OK = 0,
    SENSOR_HEALTH_TIMEOUT,
    SENSOR_HEALTH_COMM_ERROR,
    SENSOR_HEALTH_RANGE_ERROR,
    SENSOR_HEALTH_MISMATCH,
    SENSOR_HEALTH_NOT_READY
} SensorHealth_t;

typedef struct
{
    float pressure_pa;
    float temperature_c;
    uint32_t timestamp_ms;
    SensorHealth_t health;
    uint8_t valid;
} SensorSample_t;

#endif
