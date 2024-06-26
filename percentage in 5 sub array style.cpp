#include<stdio.h>
int a[100];
int b[100];
int main()
{
	int sum=0,a[100],b[100],n,i,pe,l;
	printf("Enter the no. of subjects\n");
	scanf("%d",&l);
	printf("Enter the Full Marks of your 5 subjects\n");
	scanf("%d",&n);
	printf("Enter the numbers you've got\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your percentage marks respectively are\n");
	for(i=0;i<l;i++)
	{
		b[i]=(a[i]*100)/n;
		printf("%d\n",b[i]);
		sum=sum+a[i];
	}
	pe=(sum*100)/(l*n);
	printf("Your total percentage is %d %\n",pe);
	return 0;
}