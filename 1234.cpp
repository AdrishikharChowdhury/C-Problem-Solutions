#include<stdio.h>
main()
{
	int i,j,m=4;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			if(j>i)
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