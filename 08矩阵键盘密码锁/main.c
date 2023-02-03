#include <REGX52.H>
#include "MatrixKey.h"
#include "LCD1602.h"

unsigned char Keynum;
//int bits=10;
unsigned int word=0;
void main(){
	LCD_Init();
	LCD_ShowString(1,1,"password!");
	
	while(1){
		Keynum=MatrixKey();
		if(Keynum){
			//keyboard
			if(Keynum<=9){
				word=word*10+Keynum;
			}
			LCD_Init();
			LCD_ShowNum(2,1,word,4);
			//concel one number
			if(Keynum==10){
				word=word/10;
			}
			LCD_Init();
			LCD_ShowNum(2,1,word,4);
			//confirm
			if(Keynum==16){
				if(word==1235){
					LCD_Init();
					LCD_ShowString(1,1,"correct ");
					word=0;
				}
				else{
					LCD_Init();
					LCD_ShowString(1,1,"wrong");
					word=0;
				}
			}
			LCD_ShowNum(2,1,word,4);
			
		}
	}
}
