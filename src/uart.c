#include <stdio.h>
#include "uart.h"

void UART_Send(const char *message)
{
    printf("[UART TX] %s\n", message);
}