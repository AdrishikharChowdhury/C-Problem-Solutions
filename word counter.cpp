#include<stdio.h>
#include<string.h>
int main()
	{
	char sen[100],word[100];
	int i,j,k,l1,l2,c=0,count;
	printf("Enter a sectence to find it's word count\n");
	gets(sen);
	printf("Enter the word to count\n");
	gets(word);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]>=97 && sen[i]<=122)
			sen[i]=sen[i]-32;
	}
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]>=97 && word[i]<=122)
			word[i]=word[i]-32;
	}
	l1=strlen(sen);
	l2=strlen(word);
	for(i=0;i<(l1-l2+1);i++)
	{
		if(sen[i]==word[0])
		{
			count=1;
			for(j=0,k=i;word[j]!='\0';j++,k++)
			{
				if(sen[k]!=word[j])
				{
					count=0;
					break;
				}
			}
			if(count==1)
			{
				if((i==0||sen[i-1]==' ')&&(sen[k]==' '||sen[k]=='\0'))
					c++;
			}
		}
	}	
	printf("In this sentence %s has been used %d times",word,c);
	return 0;
}