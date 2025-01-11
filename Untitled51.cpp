#include<stdio.h>
int main()
{
	int i=0,j=0,a=0,fact=1,sum=1;
	printf("Enter a number to find its factorial and ther sum\n");
	scanf("%d",&a);
	for(j=1;j<=a;j++)
	{
		fact=fact*j;
		for(i=j;i<=fact;i++)
		{
			sum=sum+i;
		}
	}
	printf("The sum is %d\n",sum);
	return 0;
}