#include<stdio.h>
#include<stdlib.h>
void showarray();
void push();
void pop();
void peek();
int a[100];
int x,c;
void main()
{
	int v,choice;
	c=-1;
	printf("Enter the size of the array: ");
	scanf("%d",&x);
	do
	{
		choice=0;
		printf("Do you want to-\n1.Push\n2.Pop\n3.Display the stack\n4.Peek\n5.Exit\nYour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				showarray();
				break;
			case 4:
			    peek();
			    break;
			case 5:
				printf("Ending Process....!!");
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(choice!=5);
}
void push()
{
	if(c==x-1)
	printf("The stack is overflowing\n");
	else
	{
		c++;
		printf("Enter the value: ");
		scanf("%d",&a[c]);
	}
}
void pop()
{
	if(c==-1)
	printf("The stack is empty\n");
	else
	{
		printf("%d has been popped\n",a[c]);
		a[c]=0;
		c--;
	}
}
void showarray()
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
void peek()
{
    if(c==-1)
    printf("The stack is empty\n");
    else
    {
        printf("The top element is %d\n",a[c]);
    }
}