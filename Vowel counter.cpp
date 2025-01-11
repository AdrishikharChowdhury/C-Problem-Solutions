<<<<<<< HEAD
#include<stdio.h>
int main()
{
	char sen[100],vowel[11]="aeiouAEIOU";
	int i,j,c=0;
	printf("Enter a sentence to find the number of vowels in it\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(sen[i]==vowel[j])
			{
				c++;
			}
		}
	}
	printf("%s has %d vowels\n",sen,c);
	return 0;
=======
#include<stdio.h>
int main()
{
	char sen[100],vowel[11]="aeiouAEIOU";
	int i,j,c=0;
	printf("Enter a sentence to find the number of vowels in it\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(sen[i]==vowel[j])
			{
				c++;
			}
		}
	}
	printf("%s has %d vowels\n",sen,c);
	return 0;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}