#include<stdio.h>
int main()
{
    int sum=0,i,n;
    scanf("%d",&n);
    for(i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        sum=sum+i;
    }
    printf("%d",sum);
}