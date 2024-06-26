#include<stdio.h>
int main()
	{
	char oc[100];
	int i,c=0;
	printf("Enter a sectence to find it's the count\n");
	gets(oc);
	for(i=0;oc[i]!='\0';i++)
	{
		if(oc[i]>=97 && oc[i]<=122)
			oc[i]=oc[i]-32;
	}
	if(oc[0]=='T' && oc[1]=='H' && oc[2]=='E' && oc[3]==' ')
		c++;
	for(i=0;oc[i]!='\0';i++)
	{
		if(oc[i]==' ')
		{
			if(oc[i+1]=='T' && oc[i+2]=='H' && oc[i+3]=='E' && oc[i+4]==' ')
				c++;
		}
	}
	if(oc[i-1]=='E' && oc[i-2]=='H' && oc[i-3]=='T' && oc[i-4]==' ')
		c++;
	printf("In this sentence the has been used %d times",c);
	return 0;	
}