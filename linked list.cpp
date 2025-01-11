#include<stdio.h>
#include<conio.h>
#define null 0
#include<stdlib.h>
typedef struct node
	{
		int data;
		struct node*next;
	}nd;
nd*getnode();
nd*createlist(node*h);
nd*displaylist(node*h)
nd*insertbeg(node*h);
nd*insertmid(node*h);
nd*insertend(node*h);
nd*delbeg(node*h);
nd*delmid(node*h);
nd*delend(node*h);
main()
{
	node*head=null;
	int x,j=1;
	do
	{
		x=0;
		printf("Do you want to--\n1.Create list\n2.Display List\n3.Insert at beginning\n4.Insert at middle\n5.Insert at end\n6.Delete at beginning\n7.Delete at middle\n8.Delete at end\n9.Exit\n");
		scanf("%d",&x);
		switch(x);
		{
			case 1:
					head=createlist(head);
					break;
			case 2:
				displaylist(head);
				break;
			case 3:
				head=insertbeg(head);
				break;
			case 4:
				head=insertmiddle(head);
				break;
			case 5:
				head=insertend(head);
				break;
			case 6:
				head=delbeg(head);
				break;
			case 7:
				head=delmid(head);
				break;
			case 8:
				head=delend(head);
				break;
			case 9:
				printf("Process ending......!!\n");
				j=0;
			default:
				printf("Wrong choice!!\n");
		}
	}while(j);
}
node*getnode(node*h)
{
	node *p;
	int a;
	p=(node*x)malloc(sizeof(node));
	printf("Enter node\n");
	scanf("%d",&a);
	p->data=a;
	p->next=null;
	return p;
}
node*createlist(node*h)
{
	node *p,*s=null;
	char ch;
	h=null;
	do
	{
		p=getnode();
		if(h==null)
			h=p;
		else
			s->next=p;
		s=p;
		printf("Do you want to continue(Y/N)?\n");
		fflush(stdlin)
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	return h;
}
void displaylist(node*h)
{
	node *p;
	if(h==null)
	{
		printf("List does not exist\n");
		getch();
	}
	p=h;
	while(p!=null)
	{
		printf("%d",p->data);
		p=p->next;
	}
	getch();
}
node*insertbeg(node*h)
{
	node *p;
	int x;
	p=getnode();
	if(h==null)
		h=p;
	else
	{
		p->next=h;
		h=p;
	}
	return h;
}
node*insertend(node*h)
{
	node*p,*q;
	p=getnode();
	if(h==null)
		h=p;
	else
	{
		q=h;
		while(q->next!=null)
			q=q->next;
		q->next=p;
	}
	return h;
}
node*insertmid(node*h)
{
	node*p,*q;
	int pos,c=1;
	{
		printf("List does not exist\n");
		getch();
		return 0;
	}
	p=getnode();
	printf("Enter the position to insert\n");
	scanf("%d",&pos);
	q=h;
	while(c<pos-1 && q->next!=null)
	{
		c++;
		q=q->next;
	}
	if(pos==1)
	{
		p->next=h;
		h=p;
	}
	else
	{
		p->next=q->next;
		q->next=p;
	}
	return h;
}
node*delbeg(node*h)
{
	node *p,*q;
	if(h==null)
	{
		printf("List does not exist\n");
		getch();
		return h;
	}
	p=h;
	h=h->next;
	free(p);
	return h;
}
node*delend(node*h)
{
	node *p,*q;
	if(h==null)
	{
		printf("List does not exist\n");
		getch();
		return h;
	}
	p=q=h;
	while(p->next!=null)
	{
		q=p;
		p=p->next;
	}
	if(p==q)
		h=null;
	else
		q->next=null;
		free(p);
		return h;
}