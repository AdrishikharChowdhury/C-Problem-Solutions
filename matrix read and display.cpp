#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
	printf("Enter the no. of rows in the matrix\n");
	scanf("%d",&r);
	printf("Enter the no. of columns in the matrix\n");
	scanf("%d",&c);
	for(i=1;i<r+1;i++)
	{
		for(j=1;j<c+1;j++)
		{
			printf("Enter value for a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<r+1;i++)
	{
		for(j=1;j<c+1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}