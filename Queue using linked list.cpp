#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
	{
		int data;
		struct node *link;
	}nd;
void display(nd *);
nd *store(nd *);
nd *retrieve(nd *);
int main()
{
	nd *head=NULL,*p,*q=NULL;
	int x,choice=0;
	char ch='y';
	do
	{
		head=store(head);
		printf("Do you want to continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("Queue is formed and shown below\n");
	display(head);
	do
	{
		printf("\n============>Main Menu<===========\n1.Store an item\n2.Retrieve an item\n3.Display your Queue\n4.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				head=store(head);
				break;
			case 2:
				head=retrieve(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				printf("Process terminated!!!\n");
				exit(0);
				break;
			default:
				printf("!!Wrong choice try again!!\n");
		}
	}while(choice!=4);
	return 0;
}
void display(nd *head)
{
	nd *r=NULL;
	r=head;
	if(head!=NULL)
	{
		printf("The elements of the Queue are\n");
		while(r!=NULL)
		{
			printf("%d ",r->data);
			r=r->link;
		}
	}
	else
		printf("Stack is Empty\n");
}
nd *store(nd *head)
{
	nd *p;
	int x;
	p=(nd *)malloc(sizeof(nd));
	printf("Enter the value to be entered\n");
	scanf("%d",&x);
	p->data=x;
	p->link=NULL;
	if(head==NULL)
		head=p;
	else
	{
		p->link=head;
		head=p;
	}
	printf("%d is stored\n",x);
	return head;
}
nd *retrieve(nd *head)
{
	nd *p,*q;
	if(head==NULL)
	{
		printf("Queue is empty\n");
		return head;
	}
	if(head->link==NULL)
	{
		p=head;
		head=NULL;
		printf("%d is retrieved\n",p->data);
		free(p);
		return head;
	}
	p=head;
	while(p->link!=NULL)
	{
		q=p;
		p=p->link;
	}
	q->link=NULL;
	printf("%d is retrieved\n",p->data);
	free(p);
	return head;
}