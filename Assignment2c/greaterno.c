#include<stdio.h>
void main()
{
	int a=8;
	int b=14;
	int c=2;
	
	if(a>b&&a>c)
	{
		printf("%d is greater",a);
	}
	else
	{
		if(b>a&&b>c)
		{
			printf("%d is greater",b);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
		
	

}
