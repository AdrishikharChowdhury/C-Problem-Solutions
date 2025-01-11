#include<stdio.h>
#include<math.h>
int V[1000];
int X[1000];
int fx[1000];
int constant();
int c;
int main()
{
	int x,i,n,sum=0;
	printf("Enter highest degree of the equation\n");
	scanf("%d",&n);
	printf("Enter co-efficients\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&V[i]);
	}
	constant();
	printf("Enter a root of x:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		X[i]=pow(x,i);
	}
	for(i=0;i<n;i++)
	{
		fx[i]=V[i]*X[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+fx[i];
	}
	sum=sum+c;
	printf("f(%d)=%d",x,sum);
	return 0;
}
int constant()
{
	int choice;
	printf("Are there any constants\n1.Yes\n2.No\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter the constant: ");
		scanf("%d",&c);
	}
	else if(choice==2)
		c=0;
	else
	{
		printf("Invalid choice !!!\n");
		constant();
	}
	return c;
}