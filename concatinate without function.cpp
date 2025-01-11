<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20],i,j;
	int l,m;
	printf("Enter the first string: ");
	gets(a);
	printf("Enter the second string: ");
	gets(b);
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		a[l+i]=b[i];
	}
	printf("The concatinated string is ");
	puts(a);
=======
#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20],i,j;
	int l,m;
	printf("Enter the first string: ");
	gets(a);
	printf("Enter the second string: ");
	gets(b);
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		a[l+i]=b[i];
	}
	printf("The concatinated string is ");
	puts(a);
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}