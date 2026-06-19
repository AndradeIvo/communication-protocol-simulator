#include <stdio.h>
#include "bms.h"
#include "can.h"

void BMS_SendBatteryStatus(void)
{
    CAN_Frame batteryFrame = {
        .id = 0x101,
        .dlc = 3,
        .data = {0x23, 0x50, 0x01}
    };

    printf("[BATTERY MANAGEMENT SYSTEM]\n");
    CAN_SendStructuredFrame(batteryFrame);
}