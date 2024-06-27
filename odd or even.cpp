#include<stdio.h>
main()
{
	int a;
	printf("Enter a number to find if it's odd or even: ");
	scanf("%d",&a);
	if(a%2==0)
	printf("\n%d is an even number",a);
	else
	printf("\n%d is an odd number",a);
}