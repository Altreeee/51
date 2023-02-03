#ifndef __NIXIE_H_
#define __NIXIE_H_

#include <REGX52.H>
#include <INTRINS.H>

unsigned char nixietable[]={0x3F,0x06,0x5B};//only 0,1,2

void Nixie(char location,int number){
	switch(location){
		case 8:
			P2_4=0;P2_3=0;P2_2=0;
			break;
		case 7:
			P2_4=0;P2_3=0;P2_2=1;
			break;
		case 6:
			P2_4=0;P2_3=1;P2_2=0;
			break;
		case 5:
			P2_4=0;P2_3=1;P2_2=1;
			break;
		case 4:
			P2_4=1;P2_3=0;P2_2=0;
			break;
		case 3:
			P2_4=1;P2_3=0;P2_2=1;
			break;
		case 2:
			P2_4=1;P2_3=1;P2_2=0;
			break;
		case 1:
			P2_4=1;P2_3=1;P2_2=1;
			break;
	}
	P0=nixietable[number];
}

#endif