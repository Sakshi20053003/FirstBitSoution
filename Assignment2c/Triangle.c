#include<stdio.h>
void main()
{
	int a=5,b=6,c=4;
	
	if(a==b&&b==c)
	{
		printf("Equilateral");
	}
	else
	{
		if(a!=b&&b!=c&&a!=c)
		{
			printf("Scalene");
		}
		else
		{
			printf("Isosceles");
		}
	}
}
