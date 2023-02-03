#include <REGX52.H>
#include "timer0.h"
#include "LCD1602.h"

unsigned char sec=0;
unsigned char min=0;

void main(){
	LCD_Init();
	LCD_ShowString(1,1,"A Clock");
	LCD_ShowString(2,1,"  :  ");
	Timer0_Init();
	LCD_ShowNum(2,1,min,2);
	LCD_ShowNum(2,4,sec,2);
	
	while(1){
		
	}
}

void Timer0_Routine() interrupt 1{
	static unsigned int T0Count;
	TH0=64535/256;
	TL0=64535%256;
	T0Count++;
	if(T0Count>=1000){
		T0Count=0;
		sec++;
		if(sec>59){
			sec=0;
			min++;
		}
		LCD_ShowNum(2,1,min,2);
		LCD_ShowNum(2,4,sec,2);
	}
}