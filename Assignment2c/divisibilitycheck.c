#include<stdio.h>
void main()
{
	int num=32;
	
	if(num%3==0&&num%5==0)
	  printf("divisible by both");
	  else
	    if(num%3==0)
		printf("divisible by 3");
		  else
	    	if(num%5==0)
		    printf("divisible by 5");
		       else
	            printf("Not divisible by both");
	
}
