#include<stdio.h>
int main()
{
	int a,c,b,i,choice;
	printf("Enter 1st number\n");
	scanf("%d",&a);
	printf("Enter 2nd number\n");
	scanf("%d",&b);
	printf("Enter your choice\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition\n");
			c=a+b;
			printf("Your answer is %d\n",c);
			break;
		case 2:
			printf("Substraction\n");
			c=a-b;
			printf("Your answer is %d\n",c);
			break;
		case 3:
			printf("Multiplication\n");
			c=a*b;
			printf("Your answer is %d\n",c);
			break;
		case 4:
			printf("Division\n");
			c=a/b;
			printf("Your answer is %d\n",c);
			break;
		default:
			printf("Wrong Input!!!");				
	}
	return 0;
}