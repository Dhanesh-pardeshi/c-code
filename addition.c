#include<stdio.h>
int main ()
{
	int a,b,c=0;
	printf("\nenter the two number");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("\nAddition:=%d",c);
	c=a-b;
	printf("\nSubstraction:=%d",c);
	c=a*b;
	printf("\nMultiplicaton:=%d",c);
	
	return 0;
}
