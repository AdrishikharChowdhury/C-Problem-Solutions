#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],ans[3][3]={0},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for b[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);		
		}
	}	
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				ans[i][j]=a[i][j]+b[i][j];
			}
		}
	printf("The resultant matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}