#ifndef DRONECAN_IF_H
#define DRONECAN_IF_H

#include <stdint.h>
#include "Common/status.h"

typedef struct
{
    uint8_t node_id;
    uint32_t bitrate;
} DroneCANConfig_t;

Status_t DroneCAN_Init(const DroneCANConfig_t *config);
void DroneCAN_Run(void);
Status_t DroneCAN_PublishAirData(void);
Status_t DroneCAN_PublishNodeStatus(void);

#endif
