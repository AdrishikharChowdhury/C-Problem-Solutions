#include<stdio.h>
main()
{
	int a[6],i,j,t,swap;
	printf("Enter the elements:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		swap=0;
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				swap=1;
			}
		}
		if(swap==0)
		break;
	}
	printf("AFter Sorting the elements are.....\n");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}