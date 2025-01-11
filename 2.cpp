//Sum of digit of two numbers
#include<stdio.h>
main()
{
	int res,num,rem,prod;
	printf("Enter the two digit number: ");
	scanf("%d",&num);
	rem=num%10;
	prod=num/10;
	res=rem+prod;
	printf("The sum of the digits of the number %d is %d",num,res);
}