#include <stdio.h>
#include "i2c.h"

void I2C_Write(unsigned char address,
               unsigned char data)
{
    printf("[I2C] Address: 0x%02X Data: %d\n",
           address,
           data);
}