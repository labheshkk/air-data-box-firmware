# Engineering Assumptions

## MCU

STM32F407VG

Reason:
Existing development experience and native CAN support.

## Sensor Interfaces

### Honeywell

Assumed transport abstraction layer (SPI/I2C selectable).

### BMP581

I2C Interface

### MS5611

SPI Interface

## Communication

CAN 2.0

## Scheduler

Bare-Metal Time Triggered Scheduler

## Future Expansion

- FreeRTOS Migration
- Sensor Calibration
- Additional Air Data Parameters
