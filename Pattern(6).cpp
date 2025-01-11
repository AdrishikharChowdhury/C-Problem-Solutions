<<<<<<< HEAD
#include<stdio.h>
int main()
{
	int a,j,i;
	printf("Enter the starting limit\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	a=a-1;
		for(i=a;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
=======
#include<stdio.h>
int main()
{
	int a,j,i;
	printf("Enter the starting limit\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	a=a-1;
		for(i=a;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
