# Communication Protocol Simulator

A C-based communication protocol simulator designed to demonstrate fundamental embedded systems communication interfaces and firmware architecture concepts.

This project simulates communication between an ESP32-like controller and multiple peripheral devices using UART, SPI, I2C and CAN protocols.

## Features

* UART communication simulation
* SPI communication simulation
* I2C communication simulation
* CAN communication simulation
* Device abstraction layer
* Modular firmware architecture
* CAN frame implementation using structures
* Clean separation between drivers and application layer

## Project Structure

```text
src/
├── main.c
├── uart.c
├── uart.h
├── spi.c
├── spi.h
├── i2c.c
├── i2c.h
├── can.c
├── can.h
├── gps.c
├── gps.h
├── temperature_sensor.c
├── temperature_sensor.h
├── bms.c
└── bms.h
```

## Simulated Devices

### GPS Module (UART)

Simulates communication between a controller and a GPS module.

### Temperature Sensor (I2C)

Simulates temperature acquisition through an I2C device.

### Battery Management System (CAN)

Simulates battery status transmission using CAN frames.

### SD Card (SPI)

Simulates data transfer over an SPI bus.

## Example Output

```text
Communication Protocol Simulator

[UART TX] ESP32 -> GPS Module

[SPI] Sent: 0xA5

[I2C] Address: 0x48 Data: 25

[CAN] ID: 0x100 Data: 35

[GPS MODULE]
[UART TX] Requesting current GPS position
[GPS RESPONSE] Latitude: 38.7223, Longitude: -9.1393

[TEMPERATURE SENSOR]
[I2C] Address: 0x48 Data: 25
[TEMPERATURE RESPONSE] Temperature: 25 deg C

[BATTERY MANAGEMENT SYSTEM]
[CAN FRAME] ID: 0x101 DLC: 3 Data: 0x23 0x50 0x01
```
## Build

```bash
gcc ./src/main.c ./src/uart.c ./src/spi.c ./src/i2c.c ./src/can.c ./src/gps.c ./src/temperature_sensor.c ./src/bms.c -o simulator.exe
```
## Run
```bash
./simulator.exe
```
