#include<stdio.h>
main()
{
	int a[6],k,val,i;
	printf("Enter your elements:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position you want to delete\n");
	scanf("%d",&k);
	val=a[k-1];
	for(i=k-1;i<5;i++)
	{
		a[i]=a[i+1];
	}
	printf("Array after deletion............\nAll elements\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("The deleted element is %d\n",val);
}