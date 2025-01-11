#include<stdio.h>
main()
{
	int i,j,m=4;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(j=1;j<=m;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}