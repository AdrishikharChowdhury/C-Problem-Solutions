#include<stdio.h>
main()
{
	int i,a[6],j,tempt;
	printf("Enter your elements\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				tempt=a[i];
				a[i]=a[j];
				a[j]=tempt;
			}
		}
	}
	printf("After Sorting the elements are:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
}