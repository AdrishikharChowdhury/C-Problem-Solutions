#include<stdio.h>
#include<string.h>
char a[100];
char ascend(int n)
{
	int i,j;
	char tempt;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				tempt=a[j];
				a[j]=a[j+1];
				a[j+1]=tempt;
			}
		}
	}
	return a[100];
}
main()
{
	printf("Enter your sentence: ");
	gets(a);
	printf("Encrypted text: ");
	puts(a);
}