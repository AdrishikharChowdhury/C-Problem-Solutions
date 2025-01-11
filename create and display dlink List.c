<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
typedef struct Dnode
{
    int data;
    struct Dnode *prev;
    struct Dnode *next;
}dnd;
dnd* createlist(dnd *,int);
void display(dnd *);
dnd* insertany(dnd *,int *);
dnd* deleteany(dnd *,int *);
int main()
{
    dnd *head,*node,*head1;
    int n,c=1,j,ch;
    printf("Enter the no. of nodes for the doubly linked list: ");
    scanf("%d",&n);
    head=(dnd *)malloc(sizeof(dnd));
    head->next=NULL;
    head->prev=NULL;
    do{
        j=1;
        printf("\nEnter your operation:\n1.Creation of Doubly Linked List\n2.Display The Doubly Linked List\n3.Insert At Any Position\n4.Delete At Any Position\n5.Exit\nYour choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Creation Of Doubly Linked List\n");
                head=createlist(head,n);
                break;
            case 2:
                printf("Display Of the Doubly Linked List\n");
                display(head);
                break;
            case 3:
            	printf("Insert at any position:\n");
            	head=insertany(head,&n);
            	break;
            case 4:
            	printf("Delete node from any position\n");
            	head=deleteany(head,&n);
            	break;
            case 5:
                j=0;
                break;
            default:
                printf("Wrong Input Try Again :)");
        }
    }while(j);
    printf("Thank You For Using This Program :)");
    return 0;
}
dnd* insertany(dnd *head,int *n)
{
	dnd *head1,*node;
	int k,i,val;
	node=(dnd *)malloc(sizeof(dnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    val=node->data;
    printf("Enter the position to be inserted (Choose from 1 to %d): ",(*n)+1);
    scanf("%d",&k);
    head1=head;
    if(k==1)
    {
        node->next=head;
        head->prev=node;
        head=node;
    }
    else if(k<1 || k>(*n)+1)
    {
        printf("Position Out Of Bounds\n");
        return head;
    }
    else{
        for(i=1;i<k-1 && head1!=NULL;i++)
        {
            head1=head1->next;
        }
        node->prev=head1;
        node->next=head1->next;
        if (head1->next != NULL)
            head1->next->prev = node;
        head1->next=node;
    }
    (*n)++;
    printf("%d is inserted at position %d",val,k);
    return head;
}
dnd* deleteany(dnd *head,int *n)
{
	dnd *head1=head;
	int k,i,val;
	if(head==NULL)
	{
		printf("The Linked List is empty\n");
		return head;
	}
	printf("Enter the position you want to delete (Choose from 1 to %d): ",(*n)+1);
	scanf("%d",&k);
    if(k==1)
    {
    	val=head->data;
        head=head1->next;
        head->prev=NULL;
        head1->next=NULL;
    }
    else if(k<1 || k>(*n))
    {
        printf("Position out of bounds\n");
        return head;
    }
    else if(k==(*n))
    {
        while(head1->next!=NULL)
        {
            head1=head1->next;
        }
        val=head1->data;
        head1->prev->next=NULL;
        head1->prev=NULL;
    }
    else{
        for(i=1;head1!=NULL && i<k-1;i++)
        {
            head1=head1->next;
        }
        val=head1->next->data;
        head1->next->next->prev=head1;
        head1->next=head1->next->next;
    }
    printf("%d is deleted\n",val);
	(*n)--;
	return head;
}
dnd* createlist(dnd *head,int c)
{
    dnd *node,*head1;
    head1=head;
    int n=1;
    printf("Enter the first data: ");
    scanf("%d",&head->data);
    while(n<c)
    {
        node=(dnd *)malloc(sizeof(dnd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next=NULL;
        head1->next=node;
        node->prev=head1;
        head1=head1->next;
        n++;
    }
    return head;
}
void display(dnd *head)
{
    dnd *head1=head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The elements in the Doubly Linked List are:\n");
    printf("NULL <- ");
    while(head1!=NULL)
    {
        printf("%d",head1->data);
        head1=head1->next;
        if (head1 != NULL) {
            printf(" = ");
        }
    }
    printf(" -> NULL\n");
=======
#include<stdio.h>
#include<stdlib.h>
typedef struct Dnode
{
    int data;
    struct Dnode *prev;
    struct Dnode *next;
}dnd;
dnd* createlist(dnd *,int);
void display(dnd *);
int main()
{
    dnd *head,*node,*head1;
    int n,c=1,j,ch;
    printf("Enter the no. of nodes for the doubly linked list: ");
    scanf("%d",&n);
    head=(dnd *)malloc(sizeof(dnd));
    head->next=NULL;
    head->prev=NULL;
    do{
        j=1;
        printf("\nEnter your operation:\n1.Creation of Doubly Linked List\n2.Display The Doubly Linked List\n3.Exit\nYour choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Creation Of Doubly Linked List\n");
                head=createlist(head,n);
                break;
            case 2:
                printf("Display Of the Doubly Linked List\n");
                display(head);
                break;
            case 3:
                j=0;
                break;
            default:
                printf("Wrong Input Try Again :)");
        }
    }while(j);
    printf("Thank You For Using This Program :)");
    return 0;
}
dnd* createlist(dnd *head,int c)
{
    dnd *node,*head1;
    head1=head;
    int n=1;
    printf("Enter the first data: ");
    scanf("%d",&head->data);
    while(n<c)
    {
        node=(dnd *)malloc(sizeof(dnd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next=NULL;
        head1->next=node;
        node->prev=head1;
        head1=head1->next;
        n++;
    }
    return head;
}
void display(dnd *head)
{
    dnd *head1=head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The elements in the Doubly Linked List are:\n");
    printf("NULL <- ");
    while(head1!=NULL)
    {
        printf("%d",head1->data);
        head1=head1->next;
        if (head1 != NULL) {
            printf(" = ");
        }
    }
    printf(" -> NULL\n");
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}