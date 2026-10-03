#include "Communication/DroneCAN/dronecan_if.h"
#include "Services/AirData/airdata.h"

static DroneCANConfig_t s_cfg;
static uint8_t s_initialized;

Status_t DroneCAN_Init(const DroneCANConfig_t *config)
{
    if (config == 0) return STATUS_INVALID;

    s_cfg = *config;
    s_initialized = 1U;

    /*
     * Integrate DroneCAN/libcanard here.
     * Final DSDL message selection must come from the network specification.
     */
    return STATUS_OK;
}

void DroneCAN_Run(void)
{
    if (s_initialized == 0U) return;

    /* Process RX, transfer reassembly, timeouts and queued TX. */
}

Status_t DroneCAN_PublishAirData(void)
{
    const AirDataOutput_t *air = AirData_GetOutput();

    if ((s_initialized == 0U) || (air == 0) || (air->valid == 0U))
        return STATUS_NOT_READY;

    /* Encode project-selected DroneCAN DSDL air-data message here. */
    return STATUS_NOT_IMPLEMENTED;
}

Status_t DroneCAN_PublishNodeStatus(void)
{
    if (s_initialized == 0U) return STATUS_NOT_READY;

    /* Publish standard node status through the selected DroneCAN stack. */
    return STATUS_NOT_IMPLEMENTED;
}
