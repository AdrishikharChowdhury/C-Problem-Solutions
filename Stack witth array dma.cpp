#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int push(int *,int ,int);
int pop(int *,int );
void peek(int *,int);
void showarray(int *,int );
main()
{
	int choice,x,c=-1,*a;
	printf("Enter the size of the array: ");
	scanf("%d",&x);
	a=(int *)malloc(x*sizeof(int));
	do
	{
		choice=0;
		printf("Do you want to-\n1.Push\n2.Pop\n3.Display the stack\n4.Peek\n5.Exit\nYour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				c=push(a,c,x);
				break;
			case 2:
				c=pop(a,c);
				break;
			case 3:
				showarray(a,c);
				break;
			case 4:
				peek(a,c);
				break;
			case 5:
				printf("Ending Process....!!");
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(choice!=5);
}
int push(int *a,int c,int x)
{
	if(c==x-1)
	printf("The stack is overflowing\n");
	else
	{
		c++;
		printf("Enter the value: ");
		scanf("%d",&a[c]);
	}
	return c;
}
int pop(int *a,int c)
{
	if(c==-1)
	printf("The stack is empty\n");
	else
	{
		printf("%d has been popped\n",a[c]);
		a[c]=0;
		c--;
	}
	return c;
}
void showarray(int *a,int c)
{
	int i;
	if(c==-1)
	printf("The stack is empty\n");
	else
	{
		printf("The values are:\n");
		for(i=c;i>=0;i--)
		{
			printf("%d\n",a[i]);
		}
	}
}
void peek(int *a,int c)
{
	if(c==-1)
	printf("The stack is empty\n");
	else
	printf("The top element is %d\n",a[c]);
}