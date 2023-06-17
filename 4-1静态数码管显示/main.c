#include <REGX52.H>
#define uchar unsigned char

/*uchar code1 table[] ={
	0x3f,0x06,0x5b,0x4f,
	0x66,0x6d,0x7d,0x07,
	0x7f,0x6f,0x77,0x7c,
	0x39,0x5e,0x79,0x71};*/

uchar code numberTable[] ={
	0x3f,0x06,0x5b,0x4f,
	0x66,0x6d,0x7d,0x07,
	0x7f,0x6f};
uchar code locationTable[] ={
	0xfe,0xfd,0xfb,0xf7,
	0xef,0xdf};
void ledDisplay(int location,number){
	//阳极控制显示什么数字
	P2_6 = 1;//启用U1锁存器跟随状态
	P0 = numberTable[number];
	P2_6 = 0;//关闭U1锁存器跟随状态
	
	//阴极控制哪个数码管显示
	P0 = locationTable[location];//第三个数码管显示
	P2_7 = 1;//确定选位

}

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

void main(){
	int i;
	int j;
	for(i = 0;i<6;i++) {
		for (j = 0;j<10;j++) {
			ledDisplay(i,j);
			Delay(500);
		}
	}
}