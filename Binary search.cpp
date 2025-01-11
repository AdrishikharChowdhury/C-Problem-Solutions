#include<stdio.h>
int main()
{
	int a[100],i,n,lp,hp,num,check=0,mid,temp,bin=0;
	printf("Enter your array's limit\n");
	scanf("%d",&n);
	if(n<100)
	{
		printf("Enter %d elements in descending order\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter the number to search\n");
		scanf("%d",&num);
		lp=0;
		hp=n-1;
		while(lp<=hp)
		{
			mid=(lp+hp)/2;
			if(a[mid]==num)
			{
				printf("Your element's at %dth position\n",mid+1);
				check++;
			break;
			}
			else if(a[mid])
			{
				hp=mid;
			}
			else
			{
				lp=mid;
			}
		}
		if(check==0)
		{
			printf("The element wasn't found in this array\nWould you like to try again?\n1.Yes\n2.No\n");
			scanf("%d",&temp);
			if(temp==1)
			{
				main();
			}
		}
		printf("Would you like to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}		
	}
	else
	{
		printf("Sorry array exceeds limit\n");
		printf("Do you want to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}
	}
	return 0;
}