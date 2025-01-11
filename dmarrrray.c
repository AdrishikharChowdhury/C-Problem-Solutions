#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *a,n;
    char *s;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the string: ");
    s=(char *)malloc(10*sizeof(char));
    gets(s);
    printf("The outputs are:\n");
    puts(s);
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}