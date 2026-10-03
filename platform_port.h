#ifndef PLATFORM_PORT_H
#define PLATFORM_PORT_H

#include <stdint.h>
#include <stddef.h>
#include "Common/status.h"

uint32_t Platform_GetTickMs(void);

Status_t Platform_I2C_Write(uint8_t address_7bit,
                            const uint8_t *tx,
                            size_t tx_len);

Status_t Platform_I2C_WriteRead(uint8_t address_7bit,
                                const uint8_t *tx,
                                size_t tx_len,
                                uint8_t *rx,
                                size_t rx_len);

Status_t Platform_SPI_Transfer(uint8_t bus_id,
                              uint8_t chip_select_id,
                              const uint8_t *tx,
                              uint8_t *rx,
                              size_t len);

Status_t Platform_CAN_Send(uint32_t extended_id,
                          const uint8_t *data,
                          uint8_t length);

#endif
