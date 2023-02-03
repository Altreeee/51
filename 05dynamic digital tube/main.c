#include <REGX52.H>
#include <INTRINS.H>
#include "delay.h"
#include "nixie.h"

void main(){
	
	while(1){
		Nixie(1,0);
		Delay1ms();
		Nixie(2,1);
		Delay1ms();
		Nixie(3,2);
		Delay1ms();
	}
}
