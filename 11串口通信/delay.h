#include <INTRINS.H>


void delay(unsigned int x)		//turn x times round
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

