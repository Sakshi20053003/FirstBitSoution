#include<stdio.h>
void main()
{
	int hr=1;
	int min=30;
	int s,sec=00;
	
	s=hr*3600;
	sec=sec+s;
	s=min*60;
	sec=sec+s;
	
	printf("time in sec is %d",sec);
}
