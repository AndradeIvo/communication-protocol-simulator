#include <stdio.h>

#include "uart.h"
#include "spi.h"
#include "i2c.h"
#include "can.h"

#include "gps.h"
#include "temperature_sensor.h"
#include "bms.h"

int main(void)
{
    printf("=====================================\n");
    printf(" Communication Protocol Simulator \n");
    printf("=====================================\n\n");

    printf("Basic Protocol Simulation\n\n");

    UART_Send("ESP32 -> GPS Module");
    SPI_Transfer(0xA5);
    I2C_Write(0x48, 25);
    CAN_SendFrame(0x100, 35);

    printf("\nDevice Layer Simulation\n\n");

    GPS_RequestPosition();

    printf("\n");

    TemperatureSensor_Read();

    printf("\n");

    BMS_SendBatteryStatus();

    return 0;
}