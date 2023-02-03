#include <REGX52.H>




void UART_Init(){//4800bps@11.0592MHz
	
	SCON=0x50;		//0101 0000 8位UART，波特率可变 
	PCON |= 0x80;	//1000 0000 SMOD=1   波特率加倍 
	
	TMOD=TMOD&0x0F;	//设置定时器模式 
	TMOD=TMOD|0x20;
	TL1 = 0xF4;		//设置定时初值 
	TH1 = 0xF4;		//设定定时器重装值  
	ET1 = 0;		//禁止定时器1中断 
	TR1 = 1;		//启动定时器1 
	
	EA=1;			//开放cpu中断 
	ES=1;			//开放串口中断 
}

void UART_SendByte(unsigned char Byte){   
	SBUF=Byte;
	while(TI==0);	//TI==1代表发送完成 
	TI=0;			//需要手动置零 
} 

//中断函数模板 
/* 
void UART_Routine(void)	interrupt 4{
	if(RI==1){	//是接收中断 （有接收到数据） 
		P2=SBUF;
		RI=0;	//手动清零 
	}
} 
*/ 


