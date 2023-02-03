#include <REGX52.H>
#include "delay.h"

//return the button which is pushed
unsigned char MatrixKey(){
	unsigned char key=0;
	P1=0xFF;
	P1_3=0;
	if(P1_7==0){delay(20);while(P1_7==0);delay(20);key=1;}
	if(P1_6==0){delay(20);while(P1_6==0);delay(20);key=4;}
	if(P1_5==0){delay(20);while(P1_5==0);delay(20);key=7;}
	if(P1_4==0){delay(20);while(P1_4==0);delay(20);key=10;}
	P1=0xFF;
	P1_2=0;
	if(P1_7==0){delay(20);while(P1_7==0);delay(20);key=2;}
	if(P1_6==0){delay(20);while(P1_6==0);delay(20);key=5;}
	if(P1_5==0){delay(20);while(P1_5==0);delay(20);key=8;}
	if(P1_4==0){delay(20);while(P1_4==0);delay(20);key=11;}
	P1=0xFF;
	P1_1=0;
	if(P1_7==0){delay(20);while(P1_7==0);delay(20);key=3;}
	if(P1_6==0){delay(20);while(P1_6==0);delay(20);key=6;}
	if(P1_5==0){delay(20);while(P1_5==0);delay(20);key=9;}
	if(P1_4==0){delay(20);while(P1_4==0);delay(20);key=12;}
	P1=0xFF;
	P1_0=0;
	if(P1_7==0){delay(20);while(P1_7==0);delay(20);key=13;}
	if(P1_6==0){delay(20);while(P1_6==0);delay(20);key=14;}
	if(P1_5==0){delay(20);while(P1_5==0);delay(20);key=15;}
	if(P1_4==0){delay(20);while(P1_4==0);delay(20);key=16;}
	
	return key;
}