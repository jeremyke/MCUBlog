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

void ledDisplay(int location,number){		
	//����������ʾʲô����
	P2_6 = 1;//����U1����������״̬
	P0 = numberTable[number];
	P2_6 = 0;//�ر�U1����������״̬
	
	//���������ĸ��������ʾ
	P0 = locationTable[location];//�������������ʾ
	P2_7 = 1;//ȷ��ѡλ
	
	//��Ӱ
	Delay(1);
	P0 = 0x00;
}



void main(){
	while(1){
		ledDisplay(0,1);
		//Delay(500);
		ledDisplay(1,2);
		//Delay(500);
		ledDisplay(2,3);
		//Delay(500);
	};
}