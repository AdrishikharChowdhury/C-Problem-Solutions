#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,c,k,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position you want to delete: ");
    scanf("%d",&k);
    for(int i=k-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("After deletion the values are:\n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}