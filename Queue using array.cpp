#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void showarray();
void store();
void retrieve();
void peek();
int x,c,*p,f;
int a[1000];
main()
{
	int choice;
	c=-2;
	create();
	f=x;
	do
	{
		printf("Do you want to-\n1.Store\n2.Retrieve\n3.Display the Queue\n4.Peek\n5.Exit\nYour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				store();
				break;
			case 2:
				retrieve();
				break;
			case 3:
				showarray();
				break;
			case 4:
				peek();
				break;
			case 5:
				printf("Process have been terminated.......\n");
				break;
			default:
				printf("Invalid choice\n");	
		}
	}while(choice!=5);
}
void create()
{
	printf("Enter the size of the array: ");
	scanf("%d",&x);
	if(x<=0 || x>1000)
	{
		printf("Queue was not created. Please try again\n");
		create();
	}
	f=x;	
}
void showarray()
{
	int i;
	if(c==-2)
		printf("The Queue is empty\n");
	else
	{	
		for(i=0;i<x;i++)
		{
			printf("==>%d",a[i]);
		}
		printf("\n");
	}
}
void store()
{
	int v;
	if(f==0)
		printf("Queue is overflowing\n");
	else
	{
		f--;
		printf("Enter the value to be stored: ");
		scanf("%d",&a[f]);
		c++;
	}
}
void retrieve()
{
	int i;
	if(c==-2)
	{
		printf("The Queue is empty\n");
	}
	else
	{
		f++;
		printf("%d has been retrieved\n",a[x-1]);
		a[x-1]=0;
		for(i=x-1;i>=0;i--)
		{
			a[i]=a[i-1];
			a[i-1]=0;
		}
		c--;
	}
}
void peek()
{
	if(c==-2)
		printf("The Queue is empty\n");
	else
		printf("The front element is %d\n",a[x-1]);
}
