#include "Platform/platform_port.h"

uint32_t Platform_GetTickMs(void)
{
#ifdef STM32H755xx
    extern uint32_t HAL_GetTick(void);
    return HAL_GetTick();
#else
    static uint32_t fake_tick;
    return fake_tick++;
#endif
}

Status_t Platform_I2C_Write(uint8_t address_7bit,
                            const uint8_t *tx,
                            size_t tx_len)
{
    (void)address_7bit; (void)tx; (void)tx_len;
    return STATUS_NOT_IMPLEMENTED;
}

Status_t Platform_I2C_WriteRead(uint8_t address_7bit,
                                const uint8_t *tx,
                                size_t tx_len,
                                uint8_t *rx,
                                size_t rx_len)
{
    (void)address_7bit; (void)tx; (void)tx_len;
    (void)rx; (void)rx_len;
    return STATUS_NOT_IMPLEMENTED;
}

Status_t Platform_SPI_Transfer(uint8_t bus_id,
                              uint8_t chip_select_id,
                              const uint8_t *tx,
                              uint8_t *rx,
                              size_t len)
{
    (void)bus_id; (void)chip_select_id; (void)tx; (void)rx; (void)len;
    return STATUS_NOT_IMPLEMENTED;
}

Status_t Platform_CAN_Send(uint32_t extended_id,
                          const uint8_t *data,
                          uint8_t length)
{
    (void)extended_id; (void)data; (void)length;
    return STATUS_NOT_IMPLEMENTED;
}
