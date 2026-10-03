#ifndef MS5611_H
#define MS5611_H

#include "Common/status.h"
#include "Drivers/Sensor/sensor_types.h"

typedef struct
{
    uint8_t spi_bus_id;
    uint8_t spi_cs_id;
} MS5611Config_t;

Status_t MS5611_Init(const MS5611Config_t *config);
Status_t MS5611_Read(SensorSample_t *sample);

#endif
