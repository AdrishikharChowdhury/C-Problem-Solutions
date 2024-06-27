#include<stdio.h>
main()
{
	int ld,r,n,sum=0;
	printf("Enter the no.: ");
	scanf("%d",&n);
	while(n!=0)
	{
		ld=n%10;
		if(ld%2==0)
		sum=sum+ld;
		n=n/10;
	}
	printf("%d is the sum",sum);
}