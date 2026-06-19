#ifndef CAN_H
#define CAN_H

typedef struct
{
    unsigned int id;
    unsigned char dlc;
    unsigned char data[8];
} CAN_Frame;

void CAN_SendFrame(unsigned int id, unsigned char data);
void CAN_SendStructuredFrame(CAN_Frame frame);

#endif