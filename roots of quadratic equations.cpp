#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,X,d,y;
	printf("Enter the co-efficients of x^2\n");
	scanf("%f",&a);
	printf("Enter the co-efficients of x\n");
	scanf("%f",&b);
	printf("Enter the value of the constant\n");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	y=sqrt(d);
	x=(-b+y)/(2*a);
	X=(-b-y)/(2*a);	
	if(d==0)
	{
		printf("The roots are real and equal\n");
		printf("The 1st and 2nd roots are %f and %f\n",x,X);
	}
	else if(d>0)
	{
		printf("The roots are real and unequal");
		printf("The 1st and 2nd roots are %f and %f\n",x,X);		
	}
	else
	{
		printf("The roots are imaginary");
	}
	return 0;
}
