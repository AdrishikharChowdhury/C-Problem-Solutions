#include<stdio.h>
int main()
{
	int a[6],num,i,k,temp;
	printf("Enter 5 elements on the aray\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Arry before insertion......\n");
	printf("All elements\n");
		for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Enter the  position you want insert\n");
	scanf("%d",&k);
	printf("Enter the number you want to insert\n");
	scanf("%d",&num);
	for(i=4;i>=k-1;i--)
	{
		a[i+1]=a[i];
		a[i]=0;
	}
	a[k-1]=num;
	printf("Array after insertion......\n");
	printf("All elements\n");
		for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}