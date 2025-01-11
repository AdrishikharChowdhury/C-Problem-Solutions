#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}nd;
nd *createlist(nd *,int);
void display(nd *);
int main()
{
    int ch,n,j=0;
    nd *head,*head1;
    printf("Enter the no. of nodes in linked list: ");
    scanf("%d",&n);
    head=(nd *)malloc(sizeof(nd));
    head->next=NULL;
    head=createlist(head,n);
    printf("Enter the value you want to delete: ");
    scanf("%d",&ch);
    printf("Before deletion:\n");
    display(head);
    head1=head;
    if (head1!= NULL && head1->data ==ch) 
    {
        head = head1->next;
        free(head1);
        printf("After deletion:\n");
        display(head);
        return 0;
    }
    while(head1->next!=NULL && head1->next->data!=ch)
    {
        head1=head1->next;
    }
    if(head1->next!=NULL)
    {
        head1->next=head1->next->next;
        printf("After deletion:\n");
        display(head);
    }
    else{
        printf("The data can't be found in this Linked List\n");
        display(head);
    }
    return 0;
}
nd* createlist(nd *head1,int n)
{
    int ch=1;
    nd *node,*head;
    head=head1;
    printf("Enter the first data: ");
    scanf("%d",&head1->data);
    while(ch<n)
    {
        node=(nd *)malloc(sizeof(nd));
        printf("Enter the next data: ");
        scanf("%d",&node->data);
        head->next=node;
        node->next=NULL;
        head=head->next;
        ch++;
    }
    return head1;
}
void display(nd *head)
{
    if(head->next==NULL)
    {
        printf("There is no element in the Linked List\n");
        return ;
    }
    printf("The Elements In the Linked List are:\n ");
    while(head!=NULL) 
    {
        printf("%d -> ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}