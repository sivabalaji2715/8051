#include<reg51.h>
sbit led=P1^0;
void timer0_delay()
{
	 char i;
	for(i=0;i<1000;i++)
	{
		TH0=0x4c;
		TL0=0x00;
		TF0=0;
		TR0=1;
		while(TF0==0);
		TR0=0;
		TF0=0;
	}
}
void main()
{
	TMOD =0x01;
	led=0;
	while(1)
	{
		timer0_delay();
		led=~led;
	}
}
			
		