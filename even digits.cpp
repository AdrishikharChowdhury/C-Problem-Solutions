#include<stdio.h>
int main()
{
	int rem,num,c,n,r;
	printf("Enter the number to find if all the digits are even\n");
	scanf("%d",&num);
	n=num;
	while (n!= 0) 
	{
		rem=n%10;
		r=rem%2;
		if(r==1)
			c=1;
			r=0;
		n=n/10;
	}
	if(c==1)
		printf("All digits of %d isn't even\n",num);
	else
		printf("All digits of %d are even\n",num);
	return 0;	
}