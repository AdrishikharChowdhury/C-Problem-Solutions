#include<stdio.h>
#include<stdlib.h>
int binsearch(int *nums,int n,int k)
{
	int c=0,top=0,bot=n-1,mid;
	while(top<=bot)
	{
		mid=(top+bot)/2;
		if(nums[mid]==k)
		{
			printf("%d has been found at position %d",k,mid+1);
			c++;
			break;
		}
		else if(nums[mid]<k)
			top=mid+1;
		else
			bot=mid-1;
	}
	return c;
}
int* carray(int *nums,int n)
{
	int i;
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	return nums;
}
void displayarray(int *nums,int n)
{
	int i;
	printf("Your elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",nums[i]);
	}
}
int* sortbubble(int *nums,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(nums[j]>nums[j+1])
			{
				t=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=t;	
			}
		}
	}
	return nums;
}
int main()
{
	int *a,n,k,i,c;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	a=carray(a,n);
	a=sortbubble(a,n);
	displayarray(a,n);
	printf("\nEnter the element to search: ");
	scanf("%d",&k);
	c=binsearch(a,n,k);
	if(c==0)
	printf("%d hasn't been found in this array\n");
	return 0;
}