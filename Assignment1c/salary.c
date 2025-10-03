#include<stdio.h>
void main()
{
	float bs=37000;
	float da,ta,hra;
	
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	  printf("%f %f %f",da,ta,hra);	
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
		printf("%f %f% f",da,ta,hra);
	}
}
