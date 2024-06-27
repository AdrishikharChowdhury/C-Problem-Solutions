#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int create();
int showarray();
int store();
int retrieve();
int x,c,*p,f;
int a[1000];
int main()
{
	int choice;
	c=-2;
	create();
	f=x;
	do
	{
		printf("\nDo you want to-\n1.Store\n2.Retrieve\n3.Display the Queue\n4.Exit\n");
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
				printf("Process have been terminated.......\n");
				break;
			default:
				printf("Invalid choice\n");	
		}
	}while(choice!=4);
}
int create()
{
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	if(x<=0 || x>1000)
	{
		printf("Queue was not created. Please try again\n");
		create();
	}
	f=x;
	return 0;	
}
int showarray()
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
	}
	return 0;
}
int store()
{
	int v;
	if(f==0)
		printf("Queue is overflowing\n");
	else
	{
		f--;
		printf("Enter the value to be stored\n");
		scanf("%d",&v);
		a[f]=v;
		c++;
	}
	return 0;
}
int retrieve()
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
	return 0;
}