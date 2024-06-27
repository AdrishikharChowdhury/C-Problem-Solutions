#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[100],pali[100];
	int l,i,j,c=0;
	printf("Enter a word to find if its pallindrome: ");
	gets(pali);
	l=strlen(pali);
	for(i=0;i<=l;i++)
	{
		a[i]=tolower(pali[i]);
	}
	for(i=0;i<=l;i++)
	{
		if(a[i]!=a[l-i-1])
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("%s is a pallindrome word\n",pali);
	}
	else
	{
		printf("%s is not a pallindrome word\n",pali);
	}
	return 0;
}