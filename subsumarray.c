#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *nums,n=4,numsSize=4;;
	int N=n*(n+1)/2;
    int *a,c=0;
    a=(int *)malloc(N*sizeof(int));
    nums=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
    	scanf("%d",&nums[i]);
	}
    for(int i=0;i<N;i++)
    {
        a[i]=nums[i];
        for(int j=i+1;j<numsSize;j++)
        {
            c+=nums[j];
            a[i++]=c;
        }
    }
    printf("Sum Sub array\n");
    for(int i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
}