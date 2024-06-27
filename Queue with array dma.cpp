#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void showarray(int *,int *,int);
void store(int *,int *,int *);
void retrieve(int *,int *,int *,int);
void peek(int *,int *,int);
main()
{
	int i,choice,x,c=-2,*a,f;
	printf("Enter the size of the array: ");
	scanf("%d",&x);
	a=(int *)malloc(x*sizeof(int));
	f=x;
	for(i=0;i<x;i++) //To remove the garbage values in array a
	a[i]=0; 
	do
	{
		printf("Do you want to-\n1.Store\n2.Retrieve\n3.Display the Queue\n4.Peek\n5.Exit\nYour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				store(a,&c,&f);
				break;
			case 2:
				retrieve(a,&c,&f,x);
				break;
			case 3:
				showarray(a,&c,x);
				break;
			case 4:
				peek(a,&c,x);
				break;
			case 5:
				printf("Process have been terminated.......\n");
				break;
			default:
				printf("Invalid choice\n");	
		}
	}while(choice!=5);
}
void showarray(int *a,int *b,int x)
{
	int i,c;
	c=*b;
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
	*b=c;
}
void store(int *a,int *b,int *F)
{
	int f,c;
	c=*b;
	f=*F;
	if(f==0)
		printf("Queue is overflowing\n");
	else
	{
		f--;
		printf("Enter the value to be stored: ");
		scanf("%d",&a[f]);
		c++;
	}
	*F=f;
	*b=c;
}
void retrieve(int *a,int *b,int *F,int x)
{
	int i,c,f;
	c=*b;
	f=*F;
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
	*F=f;
	*b=c;
}
void peek(int *a,int *b,int x)
{
	int c;
	c=*b;
	if(c==-2)
		printf("The Queue is empty\n");
	else
		printf("The front element is %d\n",a[x-1]);
	*b=c;
}