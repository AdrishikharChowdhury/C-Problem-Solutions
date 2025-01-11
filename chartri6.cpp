#include<stdio.h>
main()
{
	int i,j;
	char s;
	for(i=1;i<=5;i++)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			if(j==i)
			{
				printf("%c",s);
				s--;
			}
			else
			{
				printf("%c",s);
				s++;
			}
		}
		printf("\n");
	}
}