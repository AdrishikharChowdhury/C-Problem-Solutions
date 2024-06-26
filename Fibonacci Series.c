#include<stdio.h>
main()
{
	int ft=1,st=1,ct=0,n,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Fibonacci Series\n");
	while(ft<=n)
	{
        printf("%d ",ft);
        ct=ft+st;
        ft=st;
        st=ct;
    }
}
