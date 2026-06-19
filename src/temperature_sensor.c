#include <stdio.h>
#include "temperature_sensor.h"
#include "i2c.h"

void TemperatureSensor_Read(void)
{
    printf("[TEMPERATURE SENSOR]\n");
    I2C_Write(0x48, 25);
    printf("[TEMPERATURE RESPONSE] Temperature: 25 deg C\n");
}