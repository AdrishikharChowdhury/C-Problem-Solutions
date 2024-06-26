#include<stdio.h>
#include<math.h>
int main()
{
	int a[25],i,r,sum;
	printf("Enter 25 elements of an array\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
	}
	r=fmod(i,2);
		for(i=0;i<25;i++)
		{
			if(r==1)
			{
				sum=sum+a[i];
			}
		}
	printf("The sum is %d\n",sum);
	return 0;
}