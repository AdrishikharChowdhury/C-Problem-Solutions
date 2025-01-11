//Bubble Sort Method 
#include<stdio.h>
int ascend(int);
int descend(int);
int getvalue(int);
int a[100];
int main()
{
	int i,n,temp,check;
	printf("Enter your array's limit\n");
	scanf("%d",&n);
	if(n<100)
	{
		getvalue(n);
		printf("Enter your choice\n1. Ascending\n2. Descending\n3. Exit\n");
		scanf("%d",&check);
		switch(check)
		{
			case 1:
				printf("Ascending ordered elements\n");
				ascend(n);
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}				
				break;
			case 2:
				printf("Descending ordered elements\n");
				descend(n);
				for(i=0;i<n;i++)
				{
					printf("%d\n",a[i]);
				}
				break;
			case 3:
				break;
			default:
				printf("You haven't entered a valid choice\n");	
		}
	}
	else
	{
		printf("Sorry!! array exceeds limit\n");
		printf("Do you want to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}	
	}
	return 0;
}
int getvalue(int n)
{
	int i;
	printf("Enter your %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int ascend(int n)
{
	int i,j,tempt;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				tempt=a[j];
				a[j]=a[j+1];
				a[j+1]=tempt;
			}
		}
	}
	return 0;
}
int descend(int n)
{
	int i,j,tempt;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]<a[j+1])
			{
				tempt=a[j];
				a[j]=a[j+1];
				a[j+1]=tempt;
			}
		}
	}
	return 0;
}