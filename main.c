#include "project-defs.h"

void main(void) {

  //Inits
  INIT_EXTENDED_SFR();
  EA = 1; // enable interrupts
  serialConsoleInitialise(
      CONSOLE_UART, 
      CONSOLE_SPEED, 
      CONSOLE_PIN_CONFIG
      );
  uartInitialise(
      MODBUS_UART,
      MODBUS_SPEED,
      UART_USE_OWN_TIMER,
      UART_8N1,
      MODBUS_PIN_CONFIG
      );

	// Echo characters typed on the host
	uint8_t c;
	
  while (1) {
    
    while (c = uartGetCharacter(CONSOLE_UART, NON_BLOCKING)) {
      if (c == '\n') {
        uartSendCharacter(CONSOLE_UART, '\r', BLOCKING);
        uartSendCharacter(MODBUS_UART, '\r', BLOCKING);
      }
      
      uartSendCharacter(CONSOLE_UART, c, BLOCKING);
      uartSendCharacter(MODBUS_UART, c, BLOCKING);
    }

  }

}
