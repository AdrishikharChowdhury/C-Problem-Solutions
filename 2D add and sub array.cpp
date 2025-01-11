//2D array with add and sub
#include<stdio.h>
int menu(int,int);
int getvalue(int,int);
int a[50][50];
int b[50][50];
int c[50][50];
int showarray(int,int);
int main()
{
	int a[50][50],b[50][50],ch,c[50][50]={0},i,j,temp,n,l;
	printf("Enter rows of 2D array\n");
	scanf("%d",&n);
	printf("Enter columns of 2D array\n");
	scanf("%d",&l);
	getvalue(n,l);
	menu(n,l);
	printf("Enter your choice\n1.Entering a new array\n2.Retry for same array\n3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: main();
			break;
		case 2: menu(n,l);
			break;
		case 3:
			printf("Thank You....!");
		default:
			printf("You haven't entered a valid choice\n");		
	}
	printf("Do you want to continue\n1.Enter a new array\n2.Exit");
	scanf("%d",&temp);
	if(temp==1)
	main();
	else
	{
		printf("Thank you!!\n");
	}
	return 0;
}
int getvalue(int n,int l)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			printf("Enter value for b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	return 0;
}
int menu(int n,int l)
{
	int check,i,j;
	printf("Enter your choice to show\n1.Addition\n2.Substraction\n3.Exit\n");
	scanf("%d",&check);
	switch(check)
	{
		case 1: printf("After Addition.....\nThe elements are\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<l;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}
			}
			showarray(n,l);
			break;
		case 2: printf("After Substraction.....\nThe elements are\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<l;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
				}
			}
			showarray(n,l);
			break;
		case 3: break;
		default: printf("You haven't entered a valid choice\n");
	}
	return 0;
}
int showarray(int n,int l)
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<l;j++)
				{
					printf("%d\n",c[i][j]);
				}
		}
	return 0;		
}