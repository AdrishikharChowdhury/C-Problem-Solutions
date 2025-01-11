#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    char b;
    printf("Enter the character: ");
    scanf("%c",&b);
    if(atoi(b))
        printf("The converted character is %d",atoi(b));
    printf("Enter the number: ");
    scanf("%d",&a);
    if(itoa(a))
        printf("The converted integer is: %c",itoa(a));
    return 0;
}