#include <REGX52.H>
#include <INTRINS.H>

void Delay1ms(unsigned int x)		//@12.000MHz
{
	while(x){
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
			P1=0xfe;
			Delay1ms(10);
		  P1=0xfd;
			Delay1ms(10);
		P1=0xfb;
			Delay1ms(10);
		P1=0xf7;
			Delay1ms(10);
		P1=0xef;
			Delay1ms(10);
		P1=0xdf;
			Delay1ms(10);
		P1=0xbf;
			Delay1ms(10);
		P1=0x7f;
			Delay1ms(10);
	}
}