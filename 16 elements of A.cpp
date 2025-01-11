#include<stdio.h>
#include<math.h>
int main()
{
	int A[16],i,sum=0;
	printf("Enter 16 elements of the array\n");
	for(i=0;i<16;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<16;i++)
	{
		if(i%2!=0)
		{
			sum=sum+A[i];
		}
	}
	printf("The sum is %d",sum);
	return 0;
}