#include<stdio.h>
int main ()
{
	int n;
	printf("enter the numbers:");
	scanf("%d", &n);
	if (n>0)
	{
		printf("number is positive");
	}
	else if (n==0)
	{
		printf("number is not positive and not negative");
	}
	else
	{
		printf("number is negative");
	}
	return 0;
}
