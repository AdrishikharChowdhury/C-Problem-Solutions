#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100]={0},r,c,i,j;
	printf("Enter the no. of rows of the matrices\n");
	scanf("%d",&r);
	printf("Enter the no. of columns of the matrices\n");
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
			printf("Enter value for b[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);		
		}
	}	
	for(i=1;i<r+1;i++)
		{
			for(j=0;j<c+1;j++)
			{
				ans[i][j]=a[i][j]-b[i][j];
			}
		}
	for(i=1;i<r+1;i++)
	{
		for(j=1;j<c+1;j++)
		{
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}