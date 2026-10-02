# Application Layer

## Purpose

Coordinates overall firmware execution.

## Responsibilities

- System startup
- Module initialization
- Task scheduling
- Runtime execution

## Execution Flow

SensorManager
↓
Filters
↓
AirData
↓
CAN

## Planned Runtime Loop

```c
while(1)
{
    SensorManager_Run();

    Filter_Run();

    AirData_Run();

    CAN_Run();
}
