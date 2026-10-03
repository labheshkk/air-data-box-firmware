#include "Drivers/BMP581/bmp581.h"
#include "Platform/platform_port.h"
#include <string.h>

static BMP581Config_t s_cfg;
static uint8_t s_initialized;

Status_t BMP581_Init(const BMP581Config_t *config)
{
    if (config == 0) return STATUS_INVALID;

    s_cfg = *config;
    s_initialized = 1U;

    /* TODO: Verify chip ID and configure ODR/oversampling/IIR from datasheet. */
    return STATUS_OK;
}

Status_t BMP581_Read(SensorSample_t *sample)
{
    if ((sample == 0) || (s_initialized == 0U)) return STATUS_NOT_READY;

    memset(sample, 0, sizeof(*sample));
    sample->timestamp_ms = Platform_GetTickMs();
    sample->health = SENSOR_HEALTH_NOT_READY;

    return STATUS_NOT_IMPLEMENTED;
}
