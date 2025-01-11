#include<stdio.h>
int xpow(int,int);
main()
{
	int i,x,n,pow;
	printf("Enter the base: ");
	scanf("%d",&x);
	printf("Enter the power: ");
	scanf("%d",&n);
	pow=xpow(x,n);
	printf("%d to the power %d is %d",x,n,pow);
}
int xpow(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*xpow(a,b-1);
}