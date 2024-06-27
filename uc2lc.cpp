#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,l;
	printf("Enter your string: ");
	gets(a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		a[i]=a[i]+32;
	}
	printf("The new string is: %s",a);
}