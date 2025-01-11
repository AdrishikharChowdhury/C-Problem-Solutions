<<<<<<< HEAD
#include<stdio.h>
int main()
{
	int i,val;
	char limit[100];
	printf("Enter your word\n");
	gets(limit);
	for(i=0;limit[i]!='\0';i++);
	if(i>10)
	{
		printf("Word length exceeds limit\n");
		printf("%s has %d words",limit,i);
	}
	else
	{
		printf("Word length doesn't exceeds limit\n");
		printf("%s has %d words",limit,i);
	}
	return 0;
=======
#include<stdio.h>
int main()
{
	int i,val;
	char limit[100];
	printf("Enter your word\n");
	gets(limit);
	for(i=0;limit[i]!='\0';i++);
	if(i>10)
	{
		printf("Word length exceeds limit\n");
		printf("%s has %d words",limit,i);
	}
	else
	{
		printf("Word length doesn't exceeds limit\n");
		printf("%s has %d words",limit,i);
	}
	return 0;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}