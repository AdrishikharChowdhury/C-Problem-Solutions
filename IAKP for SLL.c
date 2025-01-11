#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int data;
	struct link *next;
}nd;
void ShowList(nd *head1)
{
	int i;
	while(head1!=NULL)
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
    int i, n, k;
    nd *head, *current, *node;
    printf("Enter the no. of nodes for linked list: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of nodes\n");
        return 0;
    }
    head = (nd *)malloc(sizeof(nd));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Linked List Creation\n====================\n");
    printf("Enter the first data: ");
    scanf("%d", &head->data);
    head->next = NULL;
    createlist(head,n);
    node = (nd *)malloc(sizeof(nd));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }
    node->next = NULL;
    printf("Enter the data to be insert: ");
    scanf("%d", &node->data);
    printf("Enter the position you want to insert (1 to %d): ", n + 1);
    scanf("%d", &k);
    if (k < 1 || k > n + 1) {
        printf("Invalid position\n");
        free(node);
        return 0;
    }
    if (k == 1) 
	{
        node->next = head;
        head = node;
    }
	else {
        current = head;
        for (i = 1; i < k - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL) {
            printf("Position out of bounds\n");
            free(node);
            return 0;
        }
        node->next = current->next;
        current->next = node;
    }
    printf("Updated Linked List:\n");
    ShowList(head);
    while (head != NULL) {
        current = head;
        head = head->next;
        free(current);
    }
    return 0;
}
