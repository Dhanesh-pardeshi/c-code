#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the the number:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nYear is leap");
	}
	else
	{
		printf("\nYear is not leap");
	}
	return 0;
}