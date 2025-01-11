#include <stdio.h>
#include <string.h>
void back(char *,int);
main()
{
	int length;
    char itext[100];
    printf("Enter your text: ");
    gets(itext);
    length=strlen(itext);
    printf("Backward test: ");
    back(itext,length);
}
void back(char *text, int l)
{
    if (l==0)
    return;
    else
	{
        printf("%c", text[l-1]);
        back(text,l-1);
    }
}