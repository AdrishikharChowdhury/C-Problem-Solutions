#include<stdio.h>
char convert(char);
int main()
{
	int i;
	char sen[100];
	printf("Enter a sentence to convert every word's first letter to capital\n");
	gets(sen);
	sen[0]=convert(sen[0]);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]==' ')
		{
			sen[i+1]=convert(sen[i+1]);
		}
	}
	printf("After conversion....\n%s",sen);
	return 0;
}
char convert(char letter)
{
	if(letter>=97 && letter<=122)
	letter=letter-32;
	return letter;
}