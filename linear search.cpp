//linear search(Remastered)
#include<stdio.h>
int main()
{
	int a[100],n,i,k,c=0,temp;
	printf("Enter your array's limit\n");
	scanf("%d",&n);
	if(n<100)
	{
		printf("Enter your elements into the array\n");
		for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		printf("Enter your element to find\n");
		scanf("%d",&k);
		for(i=0;i<n;i++)
			{
				if(k==a[i])
				{
					printf("The value is at %dth\n",i+1);
					c++;
				}
			}
				if(c>=1)
				{
					printf("The element has been found %d times\n",c);
				}
				if(c<1)
				{
					printf("Sorry we couldn't find your element in this array\n");
				}
	}
	else
	{
		printf("Sory array exceeds limit\n");
		printf("Do you want to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}
	}
	return 0;
}