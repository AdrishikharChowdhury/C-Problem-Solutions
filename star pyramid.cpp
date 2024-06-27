#include<stdio.h>
main()
{
	int i,k,j,m;
	printf("Enter the no. of rows: ");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}