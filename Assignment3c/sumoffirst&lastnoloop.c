#include<stdio.h>
void main()
{
	int no=1724;
	int ld,fd,sum;
	
	ld=no%10;
	while(no>0)
	{
		fd=no%10;
		no=no/10;
	}
		sum=ld+fd;
	
	printf(" Sum is %d ",sum);
}
