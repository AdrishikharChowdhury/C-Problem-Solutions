#include<stdio.h>
void hl(int);
main()
{
	int length;
	printf("Enter the length of the line: ");
	scanf("%d",&length);
	hl(length);
}
void hl(int l)
{
	int i;
	for(i=1;i<=l;i++)
	{
		printf("-");
	}
}
