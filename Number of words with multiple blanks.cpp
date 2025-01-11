	/*Number of words with multiple blanks*/ 
#include<stdio.h>
int main()
{
	char mb[100];
	int i,c=0;
	printf("Enter your sentence\n");
	gets(mb);
	for(i=0;mb[i]!='\0';i++)
	{
		if(mb[i]==' ' && mb[i+1]!=' ')
			c++;
	}
	printf("Your sentence has %d words\n",c+1);
	return 0;
}