#include<stdio.h>
main()
{
	int a[6],i,j,t;
	printf("Enter the elements:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("AFter Sorting the elements are.....\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}