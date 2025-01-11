#include<stdlib.h>
#include<stdio.h>
typedef struct CNode{
    int data;
    struct CNode *next;
}cnd;
cnd *createlist(cnd *,int );
void display(cnd *);
cnd *insertany(cnd *,int *);
cnd *deleteany(cnd *,int *);
int main()
{
    cnd *head;
    int n,j,ch;
    printf("Enter the no. of nodes in the circular Linked List: ");
    scanf("%d",&n);
    head=(cnd *)malloc(sizeof(cnd));
    head->next=NULL;
    do{
        j=1;
        printf("Enter your operation\n1.Creation of Singly Circular Linked List\n2.Insertion At any position\n3.Deletion At any position\n4.Display the Linked List\n5.Exit\nYour choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Creation Of Singly Circular Linked List\n");
                head=createlist(head,n);
                break;
            case 2:
                printf("Insertion At any position\n");
                head=insertany(head,&n);
                break;
            case 3:
                printf("Deletion Of any position\n");
                head=deleteany(head,&n);
                break;
            case 4:
                display(head);
                break;
            case 5:
                j=0;
                printf("Thank you for using this program :)");
                break;
            default:
                printf("Wrong Input Try Again :)");
        }
    }while(j);
    return 0;
}
cnd *createlist(cnd *head,int n)
{
    cnd *head1,*node;
    int c=1;
    printf("Enter the first data: ");
    scanf("%d",&head->data);
    head1=head;
    while(c<n)
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
    printf("The Circular Linked List is:\n");
    printf("->");
    do
    {
        printf(" %d ->",head1->data);
        head1=head1->next;
    }while(head1!=head);
    printf("(back to start)\n");
}
cnd *insertany(cnd *head,int *n)
{
    cnd *head1=head,*node;
    int k,v,i;
    node=(cnd *)malloc(sizeof(cnd));
    node->next=NULL;
    printf("Enter the data to be inserted: ");
    scanf("%d",&node->data);
    v=node->data;
    printf("Enter the position to insert %d (Choose from 1 to %d): ",v,(*n)+1);
    scanf("%d",&k);
    if(k==1 || k==(*n)+1)
    {
        head1=head;
        while(head1->next!=head)
        {
            head1=head1->next;
        }
        node->next=head;
        head1->next=node;
        if(k==1)
            head=node;
    }
    else if(k<1 || k>(*n)+1)
    {
        printf("%d is out of bounds\n",k);
        return head;
    }
    else
    {
        head1=head;
       for(i=1;i<k-1;i++)
        {
            head1=head1->next;
        }
        node->next=head1->next;
        head1->next=node;
    }
    printf("%d is inserted\n",v);
    (*n)++;
    return head;
}
cnd *deleteany(cnd *head,int *n)
{
    if(head==NULL)
    {
        printf("The Linked List is Empty\n");
        return head;
    }
    int k,v,i;
    cnd *head1;
    printf("Enter the position you want to delete (Choose from 1 to %d): ",(*n));
    scanf("%d",&k);
    if(k==1)
    {
        head1=head;
        while(head1->next!=head)
        {
            head1=head1->next;
        }
        v=head1->next->data;
        head=head->next;
        head1->next=head;
    }
    else if(k==(*n))
    {
        head1=head;
        while(head1->next->next!=head)
        {
            head1=head1->next;
        }
        v=head1->next->data;
        head1->next=head;
    }
    else if(k<1 || k>(*n))
    {
        printf("%d is out of bounds\n",k);
        return head;
    }
    else
    {
        head1=head;
        for(i=1;i<k-1;i++)
        {
            head1=head1->next;
        }
        v=head1->next->data;
        head1->next=head1->next->next;
    }
    printf("%d is deleted\n",v);
    (*n)--;
    return head;
}