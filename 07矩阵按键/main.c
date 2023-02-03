#include <REGX52.H>
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char keyshow;
void main(){
	LCD_Init();
	LCD_ShowString(1,1,"HellowWorld");
	while(1){
		keyshow=MatrixKey();
		if(keyshow){
			LCD_ShowNum(2,1,keyshow,2);
		}
	}
}