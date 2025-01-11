#include<stdio.h>
#include<math.h>
int V[1000];
int X[1000];
int fx[1000];
int fX[1000];
int x[1000];
int constant();
int function();
int c;
int main()
{
	int x0,x1,e,y0=0,y1=0,x2,y2;
	printf("Enter the two brackets which gets the desiredd root\n");
	scanf("%d %d",&x0 &x1);
	function();
	for(i=0;i<n;i++)
	{
		y0=y0+fx[i];
		y1=y1+fX[i];
	}
	y0=y0+c;
	y1=y1+c;
}
int function()
{
	int x,i,n;
	printf("Enter highest degree of the equation\n");
	scanf("%d",&n);
	printf("Enter co-efficients\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&V[i]);
	}
	constant();
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		X[i]=pow(x0,i);
	}
	for(i=0;i<n;i++)
	{
		x[i]=pow(x1,i);
	}
	for(i=0;i<n;i++)
	{
		fx[i]=V[i]*X[i];
		fX[i]=V[i]*x[i];
	}
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