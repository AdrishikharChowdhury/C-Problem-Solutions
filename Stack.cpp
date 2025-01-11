#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
	{
		int data;
		struct node *link;
	}nd;
void display(nd *);
nd *push(nd *);
nd *pop(nd *);
int main()
{
	nd *head=NULL,*p,*q=NULL;
	int x,choice=0;
	char ch='y';
	do
	{
		head=push(head);
		printf("Do you want to continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("Stack is formed and shown below\n");
	display(head);
	do
	{
		printf("\n============>Main Menu<===========\n1.Push an item\n2.Pop an item\n3.Display your Stack\n4.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				head=push(head);
				break;
			case 2:
				head=pop(head);
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
nd *push(nd *head)
{
	nd *p;
	int x;
	p=(nd *)malloc(sizeof(nd));
	printf("enter the value to be entered\n");
	scanf("%d",&x);
	p->data=x;
	p->link=NULL;
	if(head==NULL)
		p->link=NULL;
	else
		p->link=head;
	head=p;
	printf("%d is pushed\n",x);
	return head;
}
nd *pop(nd *head)
{
	nd *p,*q;
	if(head==NULL)
	{
		printf("Stack is empty\n");
		return head;
	}
	p=head;
	head=head->link;
	printf("%d is popped\n",p->data);
	free(p);
	return head;
}
void display(nd *head)
{
	nd *r=NULL;
	r=head;
	if(head==NULL)
	{
		printf("Stack is Empty\n");
		return;
	}
	else
	{
		printf("Elements of the stack:\n");
		while(r!=NULL)
		{
			printf("%d\n",r->data);
			r=r->link;
		}
	}
}
