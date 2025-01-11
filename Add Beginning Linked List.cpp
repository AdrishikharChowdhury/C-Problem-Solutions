<<<<<<< HEAD
void add_begin(int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=start;
	start=temp;
=======
void add_begin(int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=start;
	start=temp;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}