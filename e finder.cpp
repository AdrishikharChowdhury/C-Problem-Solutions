 #include<stdio.h>
int main()
{
	char oc[100],f1;
	int c=0,i;
	printf("Enter your sentence\n");
	scanf("%[^\n]",oc);
	fflush(stdin);
	for(i=0;oc[i]!='\0';i++)
	{
		if(oc[i]=='e'||oc[i]=='E')
		c++;
	}
	if(c>=1)
		printf("%c has been found %d times",'e',c);
	else
		printf("There is no e in this sentence\n");	
	return 0;
}