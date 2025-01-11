#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int key;
	struct node* prev;
	struct node* next;
}node;

node* createlist(node *,int);
node* insert_at_any_pos(node *,int,int);
void display(node *);
node* insert_at_1st(node *,int);
int delete_at_1st(node *);
int delete_at_last(node *);
int main()
{
	int data,ch,i,k,key,value;
	node *head=NULL;
	i=1;
	printf("Enter\n 1. create list\n 2. display\n 3.enter at any pos(user input)\n 4.insert at 1st\n 5.delete at 1st \n 6.delete at last\n7.Exit\n");
	while(i)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\nenter the value you want to insert:");
				scanf("%d",&data);
				head=createlist(head,data); //ami head= createlist() likhchilam which leads the head increase everytime.
				// head pass na korale head asbe na tarpor seta return korate hoy jaate head ta thake same bhul tanisha porikkhay kore6ilo
				break;
			case 2:
				display(head);
				break;
			case 3:
				printf("enter where you want to insert the node:");
				scanf("%d",&k);
				printf("\nenter the value of new node: ");
				scanf("%d",&key);
				head=insert_at_any_pos(head,k,key);
				break;
			case 4:
				printf("\nEnter your element :");
				scanf("%d",&value);
				head=insert_at_1st(head,value);
				break;
			case 5:
				k=delete_at_1st(head);
				printf("%d deleted",k);
				break;
			case 6:
				k=delete_at_last(head);
				printf("%d deleted",k);
				break;
			case 7:
				display(head);
				break;	
			case 8 :
				exit(0);
				break;
			default :
				printf("wrong input");
		}
	}
	return 0;
}
node* createlist(node *head,int k)
{

	node* p = (node *)malloc(sizeof(node));
	p->key = k;
	p->prev = NULL;
	p->next = NULL;
	if(head == NULL)
	{
		return p;
	}
	node *r = head;
	while(r->next!=NULL)
	{
		r=r->next;
	}
	r->next = p;
	p->prev = r;
	return head;	
}

node* insert_at_any_pos(node *head,int k, int data){
	int i;
	node* p = (node*)malloc(sizeof(node));
	p->key = data;	
	p->prev = NULL;
	p->next = NULL;
	
	if(k== 1){
		p->next = head;
			if(head!= NULL){
				head->prev = p;
			}
		head = p;
		return p;
	}
	else {
		node* r = head;
		for(i=1;i<k-1 && r != NULL;i++)
		{
			r = r->next;
		}
	p->next = r->next;
	
	if( r->next != NULL){
		r->next->prev = p;
	}
	 p->prev = r;
	 r->next = p;
	}
	return head;
}// ekhane bracket close korisni tai error 6ilo
node* insert_at_1st(node *head,int value)
{
	node* r = head;
	node* p =(node*)malloc(sizeof(node));
	p->key = value;
	p->next = head;
	p->prev = NULL;
	head = p; 
	return p;
}
int delete_at_1st(node *head)
{
	node* r =head;
	int key;
	key = head->key;
	r->next->prev = NULL;
	head = r->next;
	free (r);
	return key;
}
int delete_at_last(node *head)
{
		node* r =head;
	int key;
	while(r->next->next == NULL){
		r = r->next;
	}
	r->next->prev = NULL;
	key = r->next->key;
	r->next =NULL;
	free(r->next);
	return key;
	
}

void display(node *head)
 {
 node* p = head;
 	if(head == NULL){
 	printf("\nlinklist is empty\n");
 	return ;
	 }
 	while(p != NULL)
	 {
 		printf("%d",p->key);
 		if(p->next != NULL)
 		printf("->");
		 
 		p = p->next;
	 }
	 printf("\n");
 }