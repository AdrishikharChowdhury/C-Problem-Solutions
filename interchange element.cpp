#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int *a,x,i,min,max,k1,k2,t;
	printf("Enter the size of the array: ");
	scanf("%d",&x);
	a=(int *)malloc(x*sizeof(int));
	printf("Enter the elements:\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	k1=k2=0;
	for(i=0;i<x;i++)
	{
		if(min<a[i])
		{
			min=a[i];
			k1=i;
		}
		if(max>a[i])
		{
			max=a[i];
			k2=i;
		}
	}
	t=a[k1];
	a[k1]=a[k2];
	a[k2]=t;
	printf("After interchanging we get.....\n");
	for(i=0;i<x;i++)
	{
		printf("%d\n",a[i]);
	}
}