#include<reg51.h>
sbit led=P1^0;
void delay()
{
	int i,j;
	for(i=0;i<500;i++)
	{
		for(j=0;j<1275;j++);
	}
}
void main()
{
	while(1)
	{
		led=1;
		delay();
		led=0;
		delay();
	}
}