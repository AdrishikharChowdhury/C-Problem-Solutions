#include<stdio.h>
#include<stdlib.h>
typedef struct Entries{
    int data;
    struct Entries *next;
}entry;
void display(entry *);
entry *createntry(entry *,int);
entry **createtable(entry **,entry *);
int findKey(int);
int main()
{
    int i,n;
    entry *hashtable[10]={0},*entries=NULL;
    printf("Enter the no. of entries you want to enter: ");
    scanf("%d",&n);
    entries=createntry(entries,n);
    createtable(hashtable,entries);
    for(i=0;i<10;i++)
    {
        printf("Table [%d]:\t",i);
        display(hashtable[i]);
        printf("\n");
    }
    return 0;
}
entry *createntry(entry *head,int n)
{
    int c=1;
    head=(entry *)malloc(sizeof(entry));
    printf("Enter the 1st entry data: ");
    scanf("%d",&head->data);
    entry *head1=head,*node;
    while(c<n)
    {
        node=(entry *)malloc(sizeof(entry));
        printf("Enter the next entry data: ");
        scanf("%d",&node->data);
        head1->next=node;
        node->next=NULL;
        head1=head1->next;
        c+=1;
    }
    return head;
}
int findKey(int data)
{
    int sum=0,rem;
    data=abs(data);
    if(data<10)
        return data;
    else{
        while(data>0)
        {
            rem=data%10;
            sum+=rem;
            data=data/10;
        }
        return findKey(sum);
    }
}
entry **createtable(entry **table,entry *head)
{
    int key;
    entry *head1=head,*temp;
    while(head1!=NULL)
    {
        key=findKey(head1->data);
        entry *head2=(entry *)malloc(sizeof(entry));
		head2->data=head1->data;
		head2->next=NULL;
        temp=table[key];
        if (table[key] == NULL) 
		{
			table[key]=head2;
        } 
		else                   
		{
            temp = table[key];
            while (temp->next != NULL) 
			{
                temp = temp->next;
            }
            temp->next = head2;
        }
        head1=head1->next;
    }
    return table;
}
void display(entry *head)
{
    entry *head1=head;
    while(head1!=NULL)
    {
        printf("%d\t",head1->data);
        head1=head1->next;
    }
}