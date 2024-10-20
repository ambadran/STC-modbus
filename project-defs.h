#ifndef INCLUDES_H
#define INCLUDES_H

// UART-hal
#define HAL_UARTS 2  // one for console and one for modbus
#define MODBUS_SPEED 9600
#define MODBUS_UART UART2
#define MODBUS_PIN_CONFIG 0

// Console settings
#define CONSOLE_SPEED 115200
#define CONSOLE_UART UART1
#define CONSOLE_PIN_CONFIG 0

#include <STC/8H8KxxU/SKDIP28.h>
#include <stdio.h>
#include <stdint.h>
#include <delay.h>
#include <gpio-hal.h>
#include <timer-hal.h>
#include <uart-hal.h>
#include <serial-console.h>

#endif
