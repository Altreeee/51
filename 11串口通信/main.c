#include <REGX52.H>
#include "UART.h"

void main(){
	UART_Init();
	UART_SendByte(0x66);
	while(1){
		
	}
}

