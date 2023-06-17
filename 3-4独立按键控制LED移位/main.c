#include <REGX52.H>

void Delay(unsigned int x)		//@12.000MHz
{
	while(x >0){
		unsigned char i, j;
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		x--;
	}
}


void main()
{
	unsigned char LEDNum = 0;
	P1 = ~0x01;
	while(1)
	{
		if(P3_7==0){
			Delay(20);//??30ms;
			while(P3_7==0);//?????
			Delay(20);//??30ms;
			LEDNum++;
			if(LEDNum==8){
				LEDNum = 0;
			}
			P1 = ~(0x01<<LEDNum);//1111 1110;1111 1101;1111 1100   
		}
		if(P3_6==0){
			Delay(20);//??30ms;
			while(P3_6==0);//?????
			Delay(20);//??30ms;
			if(LEDNum==0){
				LEDNum=8;
			}else{
				LEDNum--;
			}
			P1 = ~(0x01<<LEDNum);//1111 1110;1111 1101;1111 1100   
		}
	}

}