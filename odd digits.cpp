#include<stdio.h>
int main()
{
	int rem,num,c,n,r;
	printf("Enter the number to find if all the digits are odd\n");
	scanf("%d",&num);
	n=num;
	while (n!= 0) 
	{
		rem=n%10;
		r=rem%2;
		if(r==0)
			c=1;
			r=0;
		n=n/10;
	}
	if(c==1)
		printf("All digits of %d isn't odd\n",num);
	else
		printf("All digits of %d are odd\n",num);
	return 0;	
}