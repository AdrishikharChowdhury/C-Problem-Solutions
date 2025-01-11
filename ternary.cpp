#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	(a>b && a>c)?printf("%d is largest\n",a):printf("%d is smallest\n",a);
}