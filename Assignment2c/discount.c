#include<stdio.h>
void main()
{
	double price=500,fprice;
	char ch='y';
	
	if(ch=='y')
	{
		if(price>=500)
		{
			fprice=price-price*0.20;
	
		}
		else
		{
			fprice=price-price*0.10;
			
		}
	}
	else
	{
		if(price>=600)
		{
			fprice=price-price*0.15;

		}
		else
		{
			fprice=price;
		}
	}
	printf("Final price %lf",fprice);
}
