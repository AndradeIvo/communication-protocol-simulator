#include <stdio.h>
#include "can.h"

void CAN_SendFrame(unsigned int id, unsigned char data)
{
    printf("[CAN] ID: 0x%03X Data: %d\n", id, data);
}

void CAN_SendStructuredFrame(CAN_Frame frame)
{
    printf("[CAN FRAME] ID: 0x%03X DLC: %d Data:", frame.id, frame.dlc);

    for (int i = 0; i < frame.dlc; i++)
    {
        printf(" 0x%02X", frame.data[i]);
    }

    printf("\n");
}