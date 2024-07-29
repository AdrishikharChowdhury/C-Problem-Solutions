#include<stdio.h>
#include<stdlib.h>
int insert(int *nums,int numsize)
{
    int k,c;
    printf("Enter the value you want to insert: ");
    scanf("%d",&k);
    printf("Enter the location you want to insert %d (Choose from 1 to %d): ",k,numsize);
    scanf("%d",&c);
    for(int i=numsize-1;i>=c-1;i--)
    {
        nums[i+1]=nums[i];
    }
    nums[c-1]=k;
    numsize++;
    return numsize;
}
void display(int *nums,int numsize)
{
    printf("Your elements are:\n");
    for(int i=0;i<numsize;i++)
    {
        printf("%d ",nums[i]);
    }
}
int delete(int *nums,int numsize)
{
    int k,c;
    printf("Enter the location you want to delete (Choose from 1 to %d): ",numsize);
    scanf("%d",&c);
    k=nums[c-1];
    for(int i=c-1;i<numsize;i++)
    {
        nums[i]=nums[i+1];
    }
    printf("Deleted value is %d\n",k);
    numsize--;
    return numsize;
}
int main()
{
    int j,ch,*a,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do{
        j=1;
        printf("\nWhat operation you want to do?\n1.Insertion\n2.Deletion\n3.Display The Array\n4.Exit\nYour choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Element Insert In The Array\n");
                n=insert(a,n);
                display(a,n);
                break;
            case 2:
                printf("Delete an element from the array\n");
                n=delete(a,n);
                display(a,n);
                break;
            case 3:
                display(a,n);
                break;
            case 4:
                printf("Thank you for using the program :)");
                j=0;
                break;
            default:
                printf("Invalid Input try again :)");
        }
    }while(j);
}