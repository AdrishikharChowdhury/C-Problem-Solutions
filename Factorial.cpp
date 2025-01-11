#include<stdio.h>
int main()
{
	int i=0,a=0,fact=1;
	printf("Enter a number to find it's factorial\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d",a,fact);
	return 0;
}