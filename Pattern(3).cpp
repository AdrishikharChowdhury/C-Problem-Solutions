#include<stdio.h>
int main()
{
	int a,j,i;
	printf("Enter the starting limit\n");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
