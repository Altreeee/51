#include <REGX52.H>
#include "delay.h"
#include "UART.h"

void main(){
	UART_Init();
	while(1){
		
	}
}

void UART_Routine(void)	interrupt 4{
	if(RI==1){	//�ǽ����ж� ���н��յ����ݣ� 
		P2=SBUF;
		RI=0;	//�ֶ����� 
	}
} 
