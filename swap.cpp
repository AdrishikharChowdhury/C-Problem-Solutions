<<<<<<< HEAD
#include<stdio.h>
void swap(int *,int *);
main()
{
	int a,b;
	printf("Enter your 1st number: ");
	scanf("%d",&a);
	printf("Enter your 2nd number: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Therefore the swapped variables are %d and %d",a,b);
}
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
=======
#include<stdio.h>
void swap(int *,int *);
main()
{
	int a,b;
	printf("Enter your 1st number: ");
	scanf("%d",&a);
	printf("Enter your 2nd number: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Therefore the swapped variables are %d and %d",a,b);
}
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}