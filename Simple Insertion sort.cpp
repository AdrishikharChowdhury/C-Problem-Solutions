#include<stdio.h>
main()
{
	int a[6],i,j,k;
	printf("Enter your elements:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	printf("\nThe Ascended ordered elements are:\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}