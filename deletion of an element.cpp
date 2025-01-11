#include<stdio.h>
int main()
{
	int a[100],k,num,n=0,i,temp,val;
	printf("Enter your limit of the array\n");
	scanf("%d",&n);	
	if(n<100)
	{
		printf("Enter %d elements\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Array before deletion.......\nAll %d Elements\n",n);
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
		printf("Enter the position you want to delete\n");
		scanf("%d",&k);
		k=k-1;
		val=a[k];
		for(i=k;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("Array after deletion............\nAll %d elements\n",n-1);
		for(i=0;i<n-1;i++)
		{
			printf("%d\n",a[i]);
		}
		printf("The deleted element is %d\n",val);
		printf("Do you want to continue?\n1.Yes\n2.No\n");
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