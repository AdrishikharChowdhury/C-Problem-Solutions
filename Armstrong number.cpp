#include<stdio.h>
main()
{
	int r,sum=0,n,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(num==sum)
	printf("%d is an Armstrong number",num);
	else
	printf("%d is not an Armstrong number",num);
}