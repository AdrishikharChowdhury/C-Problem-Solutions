#include<stdio.h>
main()
{
	int i,sum=0,n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of natural numbers to %d is %d",n,sum);
}