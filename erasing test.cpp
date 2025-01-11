#include<stdio.h>
int main()
{
	int i,x;
	printf("Enter the limit\n");
	scanf("%d",&x);
	int a[x];
	printf("Enter %d values\n",x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}	
    for (i=0;i<=x;i++)
	{
	    a[i]=0;		
		a[i] = a[i+1];
	}
	printf("After Erasing all %d values are\n",x);
    for (i=0;i<x-1;i++)
        printf("==>%d",a[i]);
	return 0;
}