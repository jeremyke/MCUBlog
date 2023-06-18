#include <REGX52.H>
#include "MartrixKey.h"
#include "LCD1602.h"

unsigned char KeyNumber;
	
void main(){
	LCD_Init();
	LCD_ShowString(1,1,"MartrixKey:");
	while(1){
		KeyNumber = MartrixKey();
		if(KeyNumber){
			LCD_ShowNum(2,1,KeyNumber,2);
		}
	}
}