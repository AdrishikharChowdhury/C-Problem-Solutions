<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
main()
{
	int n,x;
	float y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			y=1+x;
			break;
		case 2:
			y=1+x/n;
			break;
		case 3:
			y=1+pow(x,n);
			break;
		default:
			y=1+(x*n);
	}
	printf("Your result is %0.3f",y);
=======
#include<stdio.h>
#include<math.h>
main()
{
	int n,x;
	float y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			y=1+x;
			break;
		case 2:
			y=1+x/n;
			break;
		case 3:
			y=1+pow(x,n);
			break;
		default:
			y=1+(x*n);
	}
	printf("Your result is %0.3f",y);
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}