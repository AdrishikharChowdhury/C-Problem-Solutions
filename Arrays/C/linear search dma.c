#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=0,k,*a,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("The value %d is at position %d\n",k,i+1);
            c++;
        }
    }
    if(c==0)
    printf("%d isn't found in this array",k);
    else
    printf("%d is found %d times",k,c);
}