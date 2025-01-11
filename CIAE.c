#include<stdlib.h>
#include<stdio.h>
typedef struct CNode{
    int data;
    struct CNode *next;
}cnd;
cnd *createlist(cnd *,int *);
void display(cnd *);
int main()
{
    cnd *head,*head1,*node,*head2;
    int n,ch;
    printf("Enter the no. of nodes in the circular Linked List: ");
    scanf("%d",&n);
    head=(cnd *)malloc(sizeof(cnd));
    head->next=NULL;
    head=createlist(head,&n);
    head1=head;
    head2=head;
    node=(cnd *)malloc(sizeof(cnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    node->next=NULL;
    while(head1->next!=head)
    {
        head1=head1->next;
    }
    head1->next=node;
    node->next=head;
    display(head);
    return 0;
}
cnd *createlist(cnd *head,int *n)
{
    cnd *head1,*node;
    int c=1;
    printf("Enter the first data: ");
    scanf("%d",&head->data);
    head1=head;
    while(c<(*n))
    {
        node=(cnd *)malloc(sizeof(cnd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        node->next = head;
        head1->next = node;
        head1 = node;
        c++;
    }
    return head;
}
void display(cnd *head)
{
    cnd *head1=head;
    printf("The circular Linked List is:\n");
    printf("->");
    do
    {
        printf(" %d ->",head1->data);
        head1=head1->next;
    }while(head1!=head);
    printf("(back to start)\n");
}