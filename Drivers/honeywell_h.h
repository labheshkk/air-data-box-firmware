#ifndef HONEYWELL_H
#define HONEYWELL_H

#include "Common/status.h"
#include "Drivers/Sensor/sensor_types.h"

typedef enum
{
    HONEYWELL_TRANSPORT_SPI = 0,
    HONEYWELL_TRANSPORT_I2C
} HoneywellTransport_t;

typedef struct
{
    HoneywellTransport_t transport;
    uint8_t i2c_address;
    uint8_t spi_bus_id;
    uint8_t spi_cs_id;
} HoneywellConfig_t;

Status_t Honeywell_Init(const HoneywellConfig_t *config);
Status_t Honeywell_Read(SensorSample_t *sample);

#endif
