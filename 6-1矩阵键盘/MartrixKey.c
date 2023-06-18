#include <REGX52.H>
#include "Delay.h"

/**
  * @brief  按下矩阵键盘返回键码
  * @param  无
  * @retval  MartrixKey 按下的矩阵键码值
  */
unsigned char MartrixKey(){
	unsigned char KeyNumber=0;
	
	P3 = 0xFE;
	if(P3_4==0){Delay(20);while(P3_4==0);Delay(20);KeyNumber=6;}
	if(P3_5==0){Delay(20);while(P3_5==0);Delay(20);KeyNumber=7;}
	if(P3_6==0){Delay(20);while(P3_6==0);Delay(20);KeyNumber=8;}
	if(P3_7==0){Delay(20);while(P3_7==0);Delay(20);KeyNumber=9;}


	P3 = 0xFD;
	if(P3_4==0){Delay(20);while(P3_4==0);Delay(20);KeyNumber=10;}
	if(P3_5==0){Delay(20);while(P3_5==0);Delay(20);KeyNumber=11;}
	if(P3_6==0){Delay(20);while(P3_6==0);Delay(20);KeyNumber=12;}
	if(P3_7==0){Delay(20);while(P3_7==0);Delay(20);KeyNumber=13;}
	
	P3 = 0xFB;
	if(P3_4==0){Delay(20);while(P3_4==0);Delay(20);KeyNumber=14;}
	if(P3_5==0){Delay(20);while(P3_5==0);Delay(20);KeyNumber=15;}
	if(P3_6==0){Delay(20);while(P3_6==0);Delay(20);KeyNumber=16;}
	if(P3_7==0){Delay(20);while(P3_7==0);Delay(20);KeyNumber=17;}
	
	P3 = 0xF7;
	if(P3_4==0){Delay(20);while(P3_4==0);Delay(20);KeyNumber=18;}
	if(P3_5==0){Delay(20);while(P3_5==0);Delay(20);KeyNumber=19;}
	if(P3_6==0){Delay(20);while(P3_6==0);Delay(20);KeyNumber=20;}
	if(P3_7==0){Delay(20);while(P3_7==0);Delay(20);KeyNumber=21;}
	
	return KeyNumber;
}