#include<stdio.h>
main()
{
	int i,j,a[5][5];
	printf("Enter the elements\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i!=j)
			a[i][j]=0;
		}
	}
	printf("The diagonal matrix is\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}