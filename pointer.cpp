#include<stdio.h>
int main()
{
	int x,*px;
	px=&x;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("The adress of x= %u\n",px);
	main();
	return 0;
}