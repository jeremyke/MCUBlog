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
	while(1)
	{
		if(P3_7==0){
			Delay(20);//—”≥Ÿ30ms;
			while(P3_7==0);//∞¥º¸≤ªÀ… ÷
			Delay(20);
			P1_0 = ~P1_0;
		}
	}

}