//this main project make that when push down the D1button,the led lights up,then after the other pushing
//the led lights down.

#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int x)		//turn x times round
{
	unsigned char i, j;
	while(x){
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		x--;
	}
}


void main(){
	while(1){
		 if(P3_1==0/*put down the button*/){
			 Delay(10);
			 while(P3_1==0);
			 Delay(10);
			 P2_0=~P2_0;
		}
	}
}