#include<stdio.h>
void main()
{
	printf("\n1Add ,2Sub, 3Mul ,4Div");
	int ch=1;
	int a=30,b=5,c;
	
	if(ch==1)
	{
	   c=a+b;	
	}
	else
	{
		if(ch==2)
		{
			c=a-b;
		}
		else
		{
			if(ch==3)
			{
				c=a*b;
			}
			else
			{
				if(ch==4)
				{
					c=a/b;
				}
				else
				{
					printf("Invalide");
				}
			}
		}
	}
	printf("\n%d is result",c);
}
