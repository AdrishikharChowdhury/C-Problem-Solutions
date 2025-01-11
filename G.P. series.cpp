#include<stdio.h>
int menu(int,int,int);
int again(int,int,int);
int term[100];
int main()
{
	int i,n,a,r,sum=0,term[100];
	printf("Enter the 1st term of a G.P. Series\n");
	scanf("%d",&a);
	printf("Enter the common ratio of a G.P. series\n");
	scanf("%d",&r);
	printf("Enter the number of terms you want to show\n");
	scanf("%d",&n);
	printf("%d elements of the G.P. series are....\n",n);
	menu(a,r,n);
	again(a,r,n);
	return 0;
}
int menu(int a,int r,int n)
{
	int i,sum=0,choice=0,check=0;
	printf("Enter the type of G.P. series\n1.Increasing\n2.Decreasing\n3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("When G.P. series is increasing\n");
				for(i=0;i<n;i++)
				{
					term[i]=a;
					sum=sum+term[i];					
					a=a*r;
					printf("%d\n",term[i]);
				}
				printf("Sum of the G.P. series is %d\n",sum);
				break;
		case 2:
			printf("When G.P. series is decreasing\n");
				for(i=0;i<n;i++)
				{
					term[i]=a;
					sum=sum+term[i];
					a=a/r;
					printf("%d\n",term[i]);					
				}
				printf("Sum of the G.P. series is %d\n",sum);
				break;
		case 3:
			break;	
		default:
			printf("You haven't entered a valid choice\nDo you want to try again?\n1.Yes\n2.No\n");
			scanf("%d",&check);
			if(check==1)
				menu(a,r,n);	
	}
	return 0;
}
int again(int a,int r,int n)
{
	int check=0,op=0,option=0;
	printf("Do you want to try?\n1.Exploring another choice\n2.Entering new values\n3.Exit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			menu(a,r,n);
			break;
		case 2:
			main();
			break;
		case 3:
			break;
		default:
			printf("You haven't entered a valid choice\nDo you want to try again?\n1.Yes\n2.No\n");
			scanf("%d",&check);
			if(check==1);
				again(a,r,n);		
	}
	printf("Do you want to run this program again?\n1.Yes\n2.No\n");
	scanf("%d",&option);
	if(option==1)
		main();
	else
		return 0;	
	return 0;
}