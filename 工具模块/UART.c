#include <REGX52.H>




void UART_Init(){//4800bps@11.0592MHz
	
	SCON=0x50;		//0101 0000 8λUART�������ʿɱ� 
	PCON |= 0x80;	//1000 0000 SMOD=1   �����ʼӱ� 
	
	TMOD=TMOD&0x0F;	//���ö�ʱ��ģʽ 
	TMOD=TMOD|0x20;
	TL1 = 0xF4;		//���ö�ʱ��ֵ 
	TH1 = 0xF4;		//�趨��ʱ����װֵ  
	ET1 = 0;		//��ֹ��ʱ��1�ж� 
	TR1 = 1;		//������ʱ��1 
	
	EA=1;			//����cpu�ж� 
	ES=1;			//���Ŵ����ж� 
}

void UART_SendByte(unsigned char Byte){   
	SBUF=Byte;
	while(TI==0);	//TI==1��������� 
	TI=0;			//��Ҫ�ֶ����� 
} 

//�жϺ���ģ�� 
/* 
void UART_Routine(void)	interrupt 4{
	if(RI==1){	//�ǽ����ж� ���н��յ����ݣ� 
		P2=SBUF;
		RI=0;	//�ֶ����� 
	}
} 
*/ 


