#include <stdio.h>
int main() 
{
	int n, reverse = 0, remainder,num;
	printf("Enter a number to find its pallindrome\n");
	scanf("%d",&n);
	num=n;
	while (n!= 0) 
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	if(num==reverse)
		printf("%d is a pallindrome number\n",reverse);
	else
		printf("%d is not a pallindrome number\n",num);	
	return 0;
}