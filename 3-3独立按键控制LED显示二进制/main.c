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
	while(1)
	{
		if(P3_7==0){
			Delay(20);//ÑÓ³Ù30ms;
			while(P3_7==0);//°´¼ü²»ËÉÊÖ
			Delay(20);//ÑÓ³Ù30ms;
			LEDNum++;//1 -> 0000 0001;2 -> 0000 0010;3 -> 0000 0011
			P1 = ~LEDNum;//1111 1110;1111 1101;1111 1100   
		}
	}

}