//cclculate eletricity bill
//1-50=30  51-150=40   151 above it
#include<stdio.h>
void main()
{
	int unit=60;
	int rs;
	
	if(unit>=1&&unit<=50)
	{
		rs=30*unit;
	}
	else
	{
		if(unit>=51&&unit<=150)
		{
			rs=40*unit;
		}
		else 
		{
			if(unit>=151)
			{
				rs=50*unit;
			}
			else
			{
				printf("Invalid");
			}
		}
	}
	printf("Electricity bill %d",rs);
}
