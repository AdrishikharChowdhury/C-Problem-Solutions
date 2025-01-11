#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char ip[20];
	int i,ans=0;
	printf("Enter the no. ");
	scanf("%s",ip);
	printf("%d is digit count\n",strlen(ip));
	for(i=0;i<strlen(ip);i++)
	{
		ans=10*ans+(int)(ip[i]-'0');
	}
	printf("The integer is %d",ans);
	return 0;
}