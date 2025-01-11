#include<stdio.h>
int main()
{
	char oc[100],ch;
	int c=0,i;
	printf("Enter your sentence\n");
	gets(oc);
	printf("Enter your letter to find: ");
	fflush(stdin);
	ch=getchar();
	if(ch>=97 && ch<=122)
		ch=ch-32;
	for(i=0;oc[i]!='\0';i++)
	{
		if((oc[i]==ch)||(oc[i]==(ch+32)))
		{
			c++;
		}
	}
	printf("%c has been found %d times",ch,c);
	return 0;
}