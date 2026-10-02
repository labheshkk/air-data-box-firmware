#ifndef APP_H
#define APP_H

typedef enum
{
    APP_OK = 0,
    APP_ERROR
} APP_Status_t;

APP_Status_t APP_Init(void);

void APP_Run(void);

#endif
