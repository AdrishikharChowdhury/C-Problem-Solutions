#include<stdio.h>
main()
{
	int i=1,num,fact=1;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("%d is the factorial of %d",fact,num);
}