#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int speedofPokemon(char *name)
{
    int i,num,sum=0;
    for(i=0;i<strlen(name);i++)
    {
    	if (name[i] >= 'A' && name[i] <= 'Z')
        {
			num=(name[i] - 'A' + 1);
			sum=sum+num;
		}
        else if(name[i] >= 'a' && name[i] <= 'z')
        {
            num=(name[i] - 'a' + 27);
            sum=sum+num;
		}
		else
		continue;
	}
    return sum/2;
}
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
    char *s,ch;
    int i,cap=1,speed;
    printf("Enter the string: ");
    s=(char *)malloc(cap*sizeof(char));
    scanf("%s",s);
    sentenceCase(s);
    puts(s);
    speed=speedofPokemon(s);
	printf("Speed is %d",speed);
    return 0;
    main();
}