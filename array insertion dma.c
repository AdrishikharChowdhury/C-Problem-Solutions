#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,c,k,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc((n+1)*sizeof(int));
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want to insert: ");
    scanf("%d",&c);
    printf("Enter the position you want to insert: ");
    scanf("%d",&k);
    for(int i=n;i>=k-1;i--)
    {
        a[i+1]=a[i];
    }
    a[k-1]=c;
    printf("After insertion the values are:\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}