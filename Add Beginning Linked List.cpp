void add_begin(int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=start;
	start=temp;
}