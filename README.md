# Air Data Box Firmware Skeleton

Target MCU: STM32H755ZIT6  
Communication: DroneCAN over CAN/FDCAN peripheral  
Architecture: Bare-metal time-triggered scheduler with modular drivers/services

## Contents
- Application layer
- Deterministic scheduler
- Sensor abstraction interfaces
- Honeywell/BMP581/MS5611 driver shells
- Sensor manager
- Moving-average and low-pass filters
- Airspeed and altitude processing
- DroneCAN API boundary
- Platform configuration

## Integration
1. Create an STM32CubeIDE project for STM32H755ZIT6.
2. Generate clock/GPIO/I2C/SPI/FDCAN init using CubeMX.
3. Add these source folders.
4. Implement `Platform/platform_port.c` using CubeMX HAL handles.
5. Add the chosen DroneCAN/libcanard implementation.
6. Replace placeholder sensor protocol code using exact datasheets.
7. Configure project-specific DroneCAN DSDL message types and node parameters.

## Runtime Flow
Platform -> Drivers -> Sensor Manager -> Filters -> Air Data -> DroneCAN

## Current Assumptions
- Initial application on Cortex-M7.
- Bare-metal periodic scheduler.
- BMP581 on I2C.
- MS5611 on SPI.
- Honeywell transport abstracted until interface is confirmed.
- DroneCAN message types are intentionally not hard-coded until network requirements are known.
