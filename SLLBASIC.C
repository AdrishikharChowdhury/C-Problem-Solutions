//wap to creat a singly linked list and do all the basic functions..
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
	{
		int data;
		struct node *link;
	}nd;
void display(nd *);
void searchlist(nd *);
nd *insertbeg(nd *);
nd *insertend(nd *);
nd *insertany(nd *);
nd *delbeg(nd *);
nd *delend(nd *);
nd *insertbefore(nd *);
nd *insertafter(nd *);
nd *delbefore(nd *);
nd *delafter(nd *);
nd *delany(nd *);
nd *reverse(nd *);
int main()
{
	nd *head=NULL,*p,*q=NULL;
	int x,c;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		p=(nd *)malloc(sizeof(nd));
		printf("Enter your value for the Linked List\n");
		scanf("%d",&x);
		p->data=x;
		p->link=NULL;
		if(head==NULL)
			head=p;
		else
			q->link=p;
		q=p;
		printf("Do you want to continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	printf("Your singly linked list is ready\n");
	display(head);
	do
	{
		printf("\n===============>Main Menu<=====================\n1.Insert a node at the begining\n2.Insert the node at the end\n3.Insert a node at any position\n4.Insert a node before a given value\n5.Insert a node after a given value\n6.Delete a node at the begining\n7.Delete a node at the end\n8.Delete a node at any position\n9.Delete a node before a given value\n10.Delete a node after a given value\n11.Search a given node from the linked list\n12.Display the linked list\n13.Reverse the Linked List\n14.Exit from the program..\n");
		printf("Enter your choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				head=insertbeg(head);
				break;
			case 2:
				head=insertend(head);
				break;
			case 3:
				head=insertany(head);
				break;
			case 4:
				head=insertbefore(head);
				break;
			case 5:
				head=insertafter(head);
				break;
			case 6:
				head=delbeg(head);
				break;
			case 7:
				head=delend(head);
				break;
			case 8:
				head=delany(head);
				break;
			case 11:
				searchlist(head);
				break;
			case 12:
				display(head);
				break;
			case 13:
				head=reverse(head);
				break;
			case 14:
				exit(0);
				break;
			default:
				printf("wrong choice..try again\n");
				break;
		}
	}while(1);
	return(0);
}
void display(nd *head)
{
	nd *r=NULL;
	if(head==NULL)
	{
		printf("List doesn't exist\n");
	}
	r=head;
	printf("The elements of the list are\n");
	while(r!=NULL)
	{
		printf("%d ",r->data);
		r=r->link;
	}
}
void searchlist(nd *head)
{
	int x,c=0;
	nd *p;
	p=head;
	printf("Enter the value to be searched\n");
	scanf("%d",&x);
	while(p!=NULL)
	{
		c=c+1;
		if(p->data==x)
		{
			printf("Element found at position-%d\n",c);
			break;
		}
		p=p->link;
	}
	if(p==NULL)
		printf("Element not found\n");
}
nd *insertbeg(nd *head)
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
	return head;
}
nd *insertend(nd *head)
{
	nd *p,*q=NULL;
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
		q=head;
		while(q->link!=NULL)
			q=q->link;
		q->link=p;
	}
	return head;
}
nd *delbeg(nd *head)
{
	nd *p,*q;
	if(head==NULL)
	{
		printf("List doesnt exist");
		return head;
	}
	p=head;
	head=head->link;
	free(p);
	return head;
}
nd *delend(nd *head)
{
	nd *p,*q;
	if(head==NULL)
	{
		printf("List doesn't exit");
		return head;
	}
	if(head->link==NULL)
	{
		p=head;
		head=NULL;
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
	free(p);
	return head;
}
nd *insertany(nd *head)
{
	nd *x,*y=NULL,*p;
	int a,i,pos;
	p=(nd *)malloc(sizeof(nd));
	printf("enter the position to enter the value\n");
	scanf("%d",&pos);
	printf("enter the value to be entered\n");
	scanf("%d",&a);
	p->data=a;
	p->link=NULL;
	if(pos==1)
	{
		p->link=head;
		head=p;
		return head;
	}
	x=head;
	for(i=1;i<=pos-1;i++)
	{
		y=x;
		x=x->link;
		if(y==NULL)
		{
			printf("Position doesn't exist\n");
			return head;
		}
	}
	p->link=x;
	y->link=p;
	return head;
}
nd *insertbefore(nd *head)
{
	nd *x,*y,*p;
	int a,b;
	printf("Enter the value to be entered\n");
	scanf("%d",&a);
	p=(nd *)malloc(sizeof(nd));
	p->data=a;
	p->link=NULL;
	printf("Enter the value before which the value to be entered\n");
	scanf("%d",&b);
	x=head;
	y=head;
	if(y->data==b)
	{
		p->link=head;
		head=p;
		return head;
	}
	while(y->link!=NULL)
	{
		if(y->data!=b)
		{
			x=y;
			y=y->link;
		}
		else
			break;
	}
	if(y->link!=NULL)
	{
		x->link=p;
		p->link=y;
		return head;
	}
	else
	{
		printf("Element not found\n");
		return head;
	}
}
nd *insertafter(nd *head)
{
	nd *x,*y,*p;
	int a,b;
	printf("Enter the value inserted into the Linked List\n");
	scanf("%d",&a);
	p=(nd *)malloc(sizeof(nd));
	p->data=a;
	p->link=NULL;
	printf("Enter the value after which the value should enter\n");
	scanf("%d",&b);
	x=head;
	y=head;
	while(y->link!=NULL)
	{
		if(y->data!=b)
		{
			y=y->link;
			x=y->link;
		}
		else
			break;
	}
	if(y->link==NULL)
	{
		printf("Value not found\n");
		return head;
	}
	y->link=p;
	p->link=x;
	return head;
}
nd *delbefore(nd *head)
{
	nd *temp=head;
	if(head!=NULL)
	{
		if()
	}
}
nd *delafter(nd *head);
nd *delany(nd *head)
{
	int i,pos;
        nd *temp,*ptr;
        if(head==NULL)
        {
                printf("The List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("Enter the position of the node to be deleted\n");
                scanf("%d",&pos);
                pos=pos-1;
                if(pos==0)
                {
                        ptr=head;
                        head=head->link;
                        printf("The deleted element is: %d\n",ptr->data);
                        free(ptr);
                }
                else
                {
                        ptr=head;
                        for(i=0;i<pos;i++)
						{ 
							temp=ptr;
							ptr=ptr->link;
                                if(ptr==NULL)
                                {
                                        printf("Position not Found\n");
                                }
                        }
                        temp->link=ptr->link;
                        printf("The deleted element is:%d\n",ptr->data);
                        free(ptr);
                }
        }
        return head;
}
nd *reverse(nd *head)
{
	nd *curr=head,*prev=NULL,*sprev=NULL;
	while(curr!=NULL)
	{
		sprev=prev;
		prev=curr;
		curr=curr->link;
		prev->link=sprev;
	}
	head=prev;
	printf("The Linked List is successfully reversed\n");
	display(head);
	return head;
}
















