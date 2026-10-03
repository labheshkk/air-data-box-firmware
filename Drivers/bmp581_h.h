#ifndef BMP581_H
#define BMP581_H

#include "Common/status.h"
#include "Drivers/Sensor/sensor_types.h"

typedef struct
{
    uint8_t i2c_address;
} BMP581Config_t;

Status_t BMP581_Init(const BMP581Config_t *config);
Status_t BMP581_Read(SensorSample_t *sample);

#endif
