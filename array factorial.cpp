#include<stdio.h>
int main()
{
	int fact=1,i,j,n;
	printf("Enter the numbers of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers to find each of their factorial\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The factorial of above elements are.....\n");
	for(i=0;i<n;i++)
	{
		fact=1;
		for(j=1;j<=a[i];j++)
		{
			fact=fact*j;			
		}
	printf("%d!=%d\n",a[i],fact);	
	}
	return 0;
}