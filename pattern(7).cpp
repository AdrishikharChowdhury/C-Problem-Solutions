#include<stdio.h>
main()
{
	int i,j,k,m;
	printf("Enter the no. of rows: ");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}