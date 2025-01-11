#include<stdio.h>
main()
{
	int num,sum=0,r;
	printf("Enter a no. ");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("The sum of the digits is %d",sum);
}