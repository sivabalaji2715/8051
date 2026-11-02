#include<reg51.h>
sbit led=P1^0;
sbit button=P3^2;
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1275;j++);
	}
void main()
	{
		led=0;
		button=1;
		while(1)
		{
			if(button==0)
			{
				delay();
				if(button==0)
				{
					led=~led;
					while(button==0);
					delay();
				}
			}
		}
	}
}