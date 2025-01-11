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
}