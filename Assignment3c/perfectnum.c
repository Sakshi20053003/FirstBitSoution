#include<stdio.h>
void main()
{
	int num=12;
	int i=1,flag=0;
	
	while(i<num)
	{
		if(num%i==0)
		{
		   flag=1; 
		   break; 	
		}
		i++;
	}
	if(flag==1)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
		
	
	
}
