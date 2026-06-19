#include <stdio.h>
#include "spi.h"

void SPI_Transfer(unsigned char data)
{
    printf("[SPI] Sent: 0x%02X\n", data);
}