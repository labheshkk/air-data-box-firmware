#ifndef STATUS_H
#define STATUS_H

typedef enum
{
    STATUS_OK = 0,
    STATUS_ERROR,
    STATUS_TIMEOUT,
    STATUS_INVALID,
    STATUS_NOT_READY,
    STATUS_NOT_IMPLEMENTED
} Status_t;

#endif
