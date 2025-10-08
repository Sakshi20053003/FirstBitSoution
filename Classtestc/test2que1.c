//check num positive negative neutral
#include<stdio.h>
void main()
{
	int num=-0;
	
	if(num>0)
	{
		printf("Number is positive");
	}
	else
	{
		if(num<0)
		{
			printf("Number is negative");
		}
		else
		{
			printf("Number is neutral");
		}
	}
}
