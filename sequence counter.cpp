#include<stdio.h>
#include<string.h>
int main()
{
	char seq[100],sen[100];
	int i,j,k,l1,l2,c=0,count;
	printf("Enter the sentence to count the sequence\n");
	gets(sen);
	printf("Enter the sequence in the sentence\n");
	gets(seq);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]>=97 && sen[i]<=122)
		sen[i]=sen[i]-32;
	}
	for(i=0;seq[i]!='\0';i++)
	{
		if(seq[i]>=97 && seq[i]<=122)
		seq[i]=seq[i]-32;
	}
	l1=strlen(sen);
	l2=strlen(seq);
	for(i=0;i<(l1-l2+1);i++)
	{
		if(sen[i]==seq[0])
		{
			count=1;
			for(j=0,k=i;seq[j]!='\0';j++,k++)
			{
				if(sen[k]!=seq[j])
				{
					count=0;
					break;
				}
			}
			if(count==1)
			c++;
		}
	}
	printf("In the sentence %s has been found %d times",seq,c);
	return 0;
}