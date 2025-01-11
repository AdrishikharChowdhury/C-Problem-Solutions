#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *link;
} nd;
nd* insertbeg(nd *, int *);
void swapData(nd *, nd *);
void sortList(nd *);
nd* createlist(nd *, int *);
void ShowList(nd *);
nd* insertend(nd *, int *);
nd* insertpos(nd *, int *);
nd* insertval(nd *, int *);
nd* delbeg(nd *, int *);
nd* reverse(nd *);
nd* delend(nd *, int *);
nd* delpos(nd *, int *);
nd* delvalue(nd *, int *);
void menu(nd *, int *);
int countNodes(nd *);
int main() 
{
    nd *head = NULL;
    int n;
    
    head = (nd *)malloc(sizeof(nd));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Linked List Creation\n====================\n");
    printf("Enter the number of nodes for the linked list: ");
    scanf("%d", &n);
    printf("Enter the first data: ");
    scanf("%d", &head->data);
    head->link = NULL;
    head = createlist(head, &n);
    menu(head, &n);
    printf("Thank you for using this program :)\n");
    return 0;
}

nd* insertbeg(nd *h, int *n) 
{
    nd *node = (nd *)malloc(sizeof(nd));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &node->data);
    printf("%d has been inserted\n",node->data);
	node->link = h;
	h=node;
    (*n)++;
    return h;
}
void swapData(nd *a, nd *b) 
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
void sortList(nd* head) 
{
    if (head == NULL || head->link == NULL) 
		return;
    int swapped;
    nd *ptr1;
    nd *ptr2 = NULL;
    do 
	{
        swapped = 0;
        ptr1 = head;
        while (ptr1->link != ptr2) {
            if (ptr1->data > ptr1->link->data) {
                swapData(ptr1, ptr1->link);
                swapped = 1;
            }
            ptr1 = ptr1->link;
        }
        ptr2 = ptr1;
    } while (swapped);
}
nd* createlist(nd *head, int *n) 
{
    nd *node,*head1=head;
    for (int i = 1; i < *n; i++)
	{
        node = (nd *)malloc(sizeof(nd));
        if (node == NULL) {
            printf("Memory allocation failed\n");
            return head;
        }
        printf("Enter the next data: ");
        scanf("%d", &node->data);
        node->link = NULL;
        head1->link = node;
        head1 = head1->link;
    }
    return head;
}
void ShowList(nd *head) 
{
	nd *head1=head;
    if (head1 == NULL) 
	{
        printf("The Linked List is Empty\n");
        return;
    }
    printf("The elements in this Linked List are:\n");
    while (head1 != NULL) 
	{
        printf("%d -> ", head1->data);
        head1 = head1->link;
    }
    printf("NULL");
}
nd* insertend(nd* head, int *n)
{
    nd *head1 = head, *node;
    node = (nd *)malloc(sizeof(nd));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    printf("Enter the data you want to insert at the end: ");
    scanf("%d", &node->data);
    printf("%d has been inserted\n",node->data);
    node->link = NULL;
    while (head1->link != NULL) 
	{
        head1 = head1->link;
    }
    head1->link = node;
    (*n)++;
    return head;
}
nd* insertpos(nd *head, int *n) 
{
    nd *node, *current = head;
    int k, i;
    node = (nd *)malloc(sizeof(nd));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    printf("Enter the data you want to insert: ");
    scanf("%d", &node->data);
    printf("Enter the position (Choose from 1 to %d): ",(*n)+1);
    scanf("%d", &k);
    if(head==NULL)
    {
    	head=node;
    	return head;
	}
    if (k < 1 || k > (*n) + 1) {
        printf("Invalid position\n");
        free(node);
        return head;
    }
    if (k == 1) 
	{
		printf("%d has been inserted\n",node->data);
        node->link = head;
        head=node;
    } 
	else 
	{
        for (i = 1; i < k - 1 && current != NULL; i++) 
		{
            current = current->link;
        }
        if (current == NULL) 
		{
            printf("Position out of bounds\n");
            free(node);
            return head;
        }
        printf("%d has been inserted\n",node->data);
        node->link = current->link;
        current->link = node;
    }
    (*n)++;
    return head;
}

nd* delbeg(nd *head, int *n) 
{
	nd *head1;
    if (head == NULL) 
	{
        printf("The Linked List is Empty\n");
        return head;
    }
    printf("%d has been deleted",head->data);
    head1=head->link;
    head=head1;
    (*n)--;
    return head1;
}
nd *reverse(nd *head) 
{
    nd *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    return prev;
}
nd *delend(nd *head, int *n) 
{
    if (head == NULL) 
	{
        printf("The List is Empty\n");
        return head;
    }
    nd *last = head;
    if (head->link == NULL) 
	{
        printf("%d has been deleted",last->data);
		head=NULL;
		(*n)--;
        return head;
    }
    while (last->link->link != NULL) 
	{
        last = last->link;
    }
    printf("%d has been deleted",last->link->data);
    last->link = NULL;
    (*n)--;
    return head;
}
nd *delpos(nd *head, int *n) 
{
    int pos, i;
    if(head==NULL)
    {
    	printf("The Linked List is Empty\n");
    	return head;
	}
    if(head->link==NULL)
    {
    	printf("There's only one node in the Linked List and it has been deleted automatically\n");
    	head=NULL;
    	*n=0;
    	return head;
	}
    printf("Enter the position to delete (Choose from 1 to %d): ",(*n));
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) {
        printf("Invalid position\n");
        return head;
    }
    nd *temp = head;
    if (pos == 1) 
    {
    	temp=head->link;
    	head=temp;
    	(*n)--;
	}
    else
	{
        for (i = 1; temp != NULL && i < pos - 1; i++) {
            temp = temp->link;
        }
        printf("%d has been deleted",temp->link->data);
        if (temp == NULL || temp->link == NULL) 
			return head;
        temp->link=temp->link->link;
        (*n)--;
    }
    return head;
}
nd *delvalue(nd *head, int *n) 
{
    if (head == NULL) 
	{
        printf("The List is Empty\n");
        return head;
    }
    int value;
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    if (head->data == value) 
	{
        head=delbeg(head,n);
        (*n)--;
        printf("%d has been deleted", value);
        return head;
    }
    nd *temp = head;
    while (temp->link != NULL && temp->link->data != value) 
    {
        temp = temp->link;
    }
    if (temp->link == NULL) 
    {
        printf("Value not found\n");
        return head;
    }
    temp->link = temp->link->link;
    printf("%d has been deleted", value);
    (*n)--;
    return head;
}
int countNodes(nd *head) 
{
    int count = 0;
    while (head != NULL) 
	{
        head = head->link;
        count++;
    }
    return count;
}

void menu(nd *head, int *n) 
{
    int ch, c;
    while (1) 
	{
		printf("\n==========================================\n");
        printf("Enter your operation:\n");
        printf("1. Insert At Beginning\n2. Insert At End\n3. Insert At Given Position\n4. Insert After Given Value\n5. Delete the First Node\n6. Delete the Last Node\n7. Delete Any Position\n8. Delete Any Value\n9. Reverse the Linked List\n10. Count The No. Of Nodes\n11. Sort the Linked List\n12. Display The Linked List\n13. Exit\n");
		printf("==========================================\n");
		printf("Your Choice: ");
		scanf("%d", &ch);
		switch (ch) {
            case 1:
            	printf("====================================\n");
            	printf("\tInsert At Beginning \t\n");
            	printf("====================================\n");
                head = insertbeg(head, n);
                break;
            case 2:
            	printf("===============================\n");
            	printf("\tInsert At End \t\n");
            	printf("===============================\n");
                head = insertend(head, n);
                break;
            case 3:
            	printf("======================================\n");
            	printf("\tInsert At Any Position \t\n");
            	printf("======================================\n");
                head = insertpos(head, n);
                break;
            case 4:
            	printf("====================================\n");
            	printf("\tInsert At Any Value \t\n");
            	printf("====================================\n");
                head = insertval(head, n);
                break;
            case 5:
            	printf("====================================\n");
            	printf("\tDelete At Beginning \t\n");
            	printf("====================================\n");
                head = delbeg(head, n);
                break;
            case 6:
            	printf("===============================\n");
            	printf("\tDelete At End \t\n");
            	printf("===============================\n");
                head = delend(head, n);
                break;
            case 7:
            	printf("======================================\n");
            	printf("\tDelete At Any Position \t\n");
            	printf("======================================\n");
                head = delpos(head, n);
                break;
            case 8:
            	printf("====================================\n");
            	printf("\tDelete Any Value \t\n");
            	printf("====================================\n");
                head = delvalue(head, n);
                break;
            case 9:
            	printf("====================================\n");
            	printf("\tReverse The Linked List \t\n");
            	printf("====================================\n");
                head = reverse(head);
                break;
            case 10:
                c = countNodes(head);
                printf("The number of nodes in this Linked List is %d\n", c);
                break;
            case 11:
            	printf("========================================================================\n");
            	printf("\tThe Linked List has been sorted by ascending order \t\n");
            	printf("========================================================================\n");
                sortList(head);
                break;
            case 12:
            	printf("====================================\n");
            	printf("\tThe Linked List\t\n");
            	printf("====================================\n");
                ShowList(head);
                break;
            case 13:
                return;
                break;
            default:
                printf("Invalid Input! Try Again.\n");
                break;
        }
    }
}
nd* insertval(nd *head, int *n) {
    int val;
    nd *current = head;
    nd *node = (nd *)malloc(sizeof(nd));
    if (node == NULL)
	{
        printf("Memory allocation failed\n");
        return head;
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &node->data);
    printf("Enter the value after which to insert: ");
    scanf("%d", &val);
    while (current != NULL && current->data != val)
	{
        current = current->link;
    }
    if (current == NULL) 
	{
        printf("Value %d not found in the list.\n", val);
        return head;
    } 
	else 
	{
		printf("%d has been inserted",node->data);
        node->link = current->link;
        current->link = node;
        (*n)++;
    }
    return head;
}
