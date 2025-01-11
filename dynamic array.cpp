#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *a,x,i;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	a=(int *)malloc(x*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
	printf("The values are\n");
	for(i=0;i<x;i++)
		printf("%d\n",a[i]);
	getch();
	return 0;
}