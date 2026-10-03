#include "Drivers/MS5611/ms5611.h"
#include "Platform/platform_port.h"
#include <string.h>

static MS5611Config_t s_cfg;
static uint8_t s_initialized;

Status_t MS5611_Init(const MS5611Config_t *config)
{
    if (config == 0) return STATUS_INVALID;

    s_cfg = *config;
    s_initialized = 1U;

    /* TODO: Reset, read PROM calibration coefficients, validate CRC. */
    return STATUS_OK;
}

Status_t MS5611_Read(SensorSample_t *sample)
{
    if ((sample == 0) || (s_initialized == 0U)) return STATUS_NOT_READY;

    memset(sample, 0, sizeof(*sample));
    sample->timestamp_ms = Platform_GetTickMs();
    sample->health = SENSOR_HEALTH_NOT_READY;

    return STATUS_NOT_IMPLEMENTED;
}
