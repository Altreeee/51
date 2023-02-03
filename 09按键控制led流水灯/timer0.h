#include <REGX52.H>



void Timer0_Init(){
	//TMOD=0x01;//0000 0001//pas bien
	TMOD=TMOD&0xF0;//turn low4bit to0,high4bit still
	TMOD=TMOD|0x01;//turn lowestbit to1,high4bit still
	TF0=0;//first all settled to be 0
	TR0=1;
	TH0=64535/256;//the high 8bits(hexadecimal)
	TL0=64535%256;//the low 8bits
	//zhong duan jie gou
	ET0=1;
	EA=1;
	PT0=0;
}

/*this is a model of 1s
  //interrupt function
void Timer0_Routine() interrupt 1{
	static unsigned int T0Count;//keep value after quitting
	TH0=64535/256;
	TL0=64535%256;
	T0Count++;
	if(T0Count>=1000){
		T0Count=0;
	}
}
*/