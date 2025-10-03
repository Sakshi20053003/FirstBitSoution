#include<stdio.h>
void main()
{
	int m=65;
	
	if(m>75)
	{
		printf("A");
	}
	else
	{
		if(m>65&&m<=75)
		{
			printf("B");
		}
		else
		{
			if(m>55&&m<=65)
			{
				printf("C");
			}
			else
			{
				if(m>40&&m<=55)
				{
					printf("pass");
				}
				else
				{
					printf("Fail");
				}
			}
		}
	}
}

