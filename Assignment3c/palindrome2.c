#include<stdio.h>
void main()
{
	int no=424;
	int temp=no,rev,rem;

   while(no<0)
    {
      rem=no%10;
	  rev=rev*10+rem;
	  no=no/10;	
    }
    if(rev==temp)
    {
    	printf("num is  palindrome");
    }
	else
	{
		printf("num is not palindrome");
	}
}

