#include<reg51.h>
#include "LCD1602.h"
#define uchar unsigned char
#define uint unsigned int
   

uchar code Table[]="i love xiaohong!";
uchar code Table1[]="123456789";
uchar num=0;

void main()
{
    LCD_Init();
	LCD_ShowChar(1,1,'A');
	LCD_ShowNum(1,3,1+100,3);
	LCD_ShowSignedNum(1,7,-66,2);
	LCD_ShowHexNum(1,11,0xA8,2);
	LCD_ShowBinNum(2,1,0xA8,8);
	LCD_ShowString(2,10,"xx");
    while(1);
}



