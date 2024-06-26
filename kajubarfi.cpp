#include<stdio.h>
int main()
{
	int a,i,j,k,r,q,l;
	printf("Enter the number of rows: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		{
			for(j=1;j<=a-i;j++)
			{
				printf(" ");
			}
		for(k=1;k<=2*i-1;k++)
			{
				printf("*");
			}
			printf("\n");
		}
	for(i=a-1;i>=1;i--)
		{
			for(l=1;l<=a-i;l++)
			{
				printf(" ");
			}
				for(k=1;k<=2*i-1;k++)
				{
					printf("*");
				}
				printf("\n");
		}
	return 0;
	}