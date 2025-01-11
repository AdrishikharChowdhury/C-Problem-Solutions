#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void sentenceCase(char *name)
{
    int i;
    name[0]=toupper(name[0]);
    for(i=1;i<strlen(name);i++)
    {
        name[i]=tolower(name[i]);
    }
}
int main()
{
    char *s;
    int i,sum=0,cap=1,num,j=1;
    printf("Enter the string: ");
    s=(char *)malloc(cap*sizeof(char));
    scanf("%s",s);
    sentenceCase(s);
    puts(s);
    for(i=0;i<strlen(s);i++)
    {
    	if (s[i] >= 'A' && s[i] <= 'Z')
        {
			num=(s[i] - 'A' + 1);
			sum=sum+num;
		}
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            num=(s[i] - 'a' + 27);
            sum=sum+num;
		}
		else
		continue;
	}
	printf("Speed is %d",sum/2);
    return 0;
}