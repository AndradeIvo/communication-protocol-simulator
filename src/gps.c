#include <stdio.h>
#include "gps.h"
#include "uart.h"

void GPS_RequestPosition(void)
{
    printf("[GPS MODULE]\n");
    UART_Send("Requesting current GPS position");

    printf("[GPS RESPONSE] Latitude: 38.7223, Longitude: -9.1393\n");
}