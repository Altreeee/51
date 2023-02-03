#include <REGX52.H>
#include "delay.h"
#include "UART.h"

void main(){
	UART_Init();
	while(1){
		
	}
}

void UART_Routine(void)	interrupt 4{
	if(RI==1){	//是接收中断 （有接收到数据） 
		P2=SBUF;
		RI=0;	//手动清零 
	}
} 
