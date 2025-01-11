#include<stdio.h>
int main()
{
	int a[10],i,multi=1;
	printf("Enter 10 numbers in an array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		multi=multi*a[i];
	}
	printf("The multiplication of the elements is %d\n",multi);
	return 0;
}