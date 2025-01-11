#include<stdio.h>
main()
{
	int a[100],decimal,r,k,i=0;
	printf("Enter your decimal no: ");
	scanf("%d",&decimal);
	while(decimal!=0)
	{
		r=decimal%2;
		a[i++]=r;
		decimal=decimal/2;
	}
	printf("Your binary number is ");
	for(k=i-1;k>=0;k--)
	{
		printf("%d",a[k]);
	}
}