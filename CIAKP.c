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
    cnd *head,*head1,*node;
    int n,i,ch;
    printf("Enter the no. of nodes in the circular Linked List: ");
    scanf("%d",&n);
    head=(cnd *)malloc(sizeof(cnd));
    head->next=NULL;
    head=createlist(head,&n);
    head1=head;
    node=(cnd *)malloc(sizeof(cnd));
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    node->next=NULL;
    printf("Enter the position you want to insert the value: ");
    scanf("%d",&ch);
    if(ch==1 || ch==n+1)
    {
        node->next=head;
        while(head1->next!=head)
        {
            head1=head1->next;
        }
        head1->next=node;
        if(ch==1)
            head=node;
    }
    else
    {
        for(i=1;i<ch-1;i++)
        {
            head1=head1->next;
        }
        node->next=head1->next;
        head1->next=node;
    }
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