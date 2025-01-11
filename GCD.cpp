#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter two numbers to find their GCD:\n");
	scanf("%d %d",&a,&b);
	while (b != 0)
	{
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("The GCD is %d",a);
}