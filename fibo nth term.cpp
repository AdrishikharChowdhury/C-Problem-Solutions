#include<stdio.h>
main()
{
	int ft=0,st=1,ct=0,n,i=1;
	printf("Enter the term you want to find: ");
	scanf("%d",&n);			
	do
	{
        ct=ft+st;
        ft=st;
        st=ct;
        i++;
    }while(i<n);
    printf("In Fibonacci series %d is the %dth term",ft,n);
}