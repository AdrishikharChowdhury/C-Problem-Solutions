#include<stdio.h>
int a[100];
main()
{
	int n,i,j,k,ch,t=1;
	printf("Welcome to Insertion Sort\n");
	do{
		printf("\nEnter the size of the array: ");
		scanf("%d",&n);
		printf("Enter your elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Sorting options\n1.Ascending\n2.Descending\n3.Exit\nYour choice: ");
		scanf("%d",&ch);
		printf("The unsorted elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		switch(ch)
		{
			case 1:
				for(i=1;i<=n-1;i++)
				{
					k=a[i];
					j=i-1;
					while(j>=0 && a[j]>k)
					{
						a[j+1]=a[j];
						j--;
					}
					a[j+1]=k;
				}
				printf("\nThe Ascended ordered elements are:\n");
				for(i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
				break;
			case 2:
				for(i=1;i<=n-1;i++)
				{
					k=a[i];
					j=i-1;
					while(j>=0 && a[j]<k)
					{
						a[j+1]=a[j];
						j--;
					}
					a[j+1]=k;
				}
				printf("\nThe Descended ordered elements are:\n");
				for(i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
				break;
			case 3:
				t=0;
				break;
			default:
				printf("Wrong Input!!!! Process terminated......\n");
		}
		printf("\nDo you want to continue?\n1.Yes\n2.No\nYour choice: ");
		scanf("%d",&t);
		if(t==2)
		t=0;
	}while(t);
	printf("\nThank you for using this program");
}
