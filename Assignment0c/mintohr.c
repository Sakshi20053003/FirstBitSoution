#include<stdio.h>
void main()
{
	int min=230;
	int hr;
	int mn;
	
	hr=min/60;
	mn=min%60;
	printf("%d:%d",hr,mn);
}
