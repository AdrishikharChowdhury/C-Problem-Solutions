#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int data;
	struct link *next;
}nd;
void ShowList(nd *head1,int c)
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("%d -> ",head1->data);
		head1=head1->next;
	}
	printf("NULL\n");
}
void createlist(nd *head,int c)
{
	nd *node;
	int ch=1;
	while(ch<c)
	{
		node=(nd *)malloc(sizeof(nd));
		printf("Enter the next data: ");
		scanf("%d",&node->data);
		node->next=NULL;
		head->next=node;
		head=head->next;
		ch++;
	}
}
int main()
{
	int i,n;
	nd *head,*head1,*node;
	printf("Enter the no. of nodes for linked list: ");
	scanf("%d",&n);
	head=(nd *)malloc(sizeof(nd));
	printf("Linked List Creation\n====================\n");
	printf("Enter the first data: ");
	scanf("%d",&head->data);
	head->next=NULL;
	createlist(head,n);
	node = (nd *)malloc(sizeof(nd));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter the data to be inserted at the end: ");
    scanf("%d", &node->data);
    head1=head;
    while(head1->next!=NULL)
    {
    	head1=head1->next;
	}
	head1->next=node;
    n++;
	ShowList(head,n);
}