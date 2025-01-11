#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int xpow(int,int);
int hexadecimal(char);
int converter(char *,int);
int main()
{
    char *exp;
    int ans;
    printf("Enter the hexadecimal expression: ");
    exp=(char *)malloc(100*sizeof(char));
    scanf("%s",exp);
    ans=converter(exp,strlen(exp));
    printf("The decimal equivalent is %d",ans);
    return 0;
}
int hexadecimal(char a) 
{
    if(a>='A' && a<='F')
        return 10+(a-'A');
    else if(a>='a' && a<='f')
        return 10+(a-'a');
    else
        return -1; //not going to reach this case
}
int converter(char *s,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        if(isalpha(s[i]))
        {
            sum+=xpow(16,size-i-1)*(hexadecimal(s[i]));
        }
        else if (isdigit(s[i]))
        {
            sum+=(s[i]-'0')*xpow(16,size-i-1);
        }
        else
        {
            printf("Invalid character for hexadecimal input.....");
            exit(0);
        }
    }
    return sum;
}
int xpow(int a,int b)
{
    int prod=1;
    while(b>0)
    {
        prod*=a;
        b-=1;
    }
    return prod;
}