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
    dnd *head,*head1,*node;
    int n,k,i;
    printf("Enter the no. of nodes in the Doubly Linked List: ");
    scanf("%d",&n);
    head=(dnd *)malloc(sizeof(dnd));
    head->next=NULL;
    head->prev=NULL;
    head=createlist(head,n);
    node=(dnd *)malloc(sizeof(dnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    printf("Enter the position to be inserted (Choose from 1 to %d): ",n+1);
    scanf("%d",&k);
    head1=head;
    if(k==1)
    {
        node->next=head;
        head->prev=node;
        head=node;
    }
    else if(k<1 || k>n+1)
    {
        printf("Position Out Of Bounds\n");
        return main();
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
    display(head);
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