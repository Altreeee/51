#include <REGX52.H>
#include "timer0.h"
#include "key.h"
#include <INTRINS.H>

unsigned char keynum,LEDmode;
void main(){
	P2=0xFE;
	Timer0_Init();
	while(1){
		keynum = key();
		if(keynum){
			if(keynum==1){
				LEDmode++;
				if(LEDmode>=2)LEDmode=0;
			}
		}
	}
}

//interrupt function
void Timer0_Routine() interrupt 1{
	static unsigned int T0Count;//keep value after quitting
	TH0=64535/256;
	TL0=64535%256;
	T0Count++;
	if(T0Count>=1000){
		T0Count=0;
		if(LEDmode==1){
			P2=_crol_(P2,1);
		}
		if(LEDmode==0){
			P2=_cror_(P2,1);
		}
	}
}