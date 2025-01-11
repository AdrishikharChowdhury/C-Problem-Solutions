#include<stdio.h>
int factorial(int);
main()
{
	int x,fact;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&x);
	fact=factorial(x);
	printf("%d is the factorial of %d\n",fact,x);
}
int factorial(int x)
{
	if(x==0)
	return 1;
	else
	return x*factorial(x-1);
}