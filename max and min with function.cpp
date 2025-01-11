#include<stdio.h>
void prot(int);
int main()
{
	int x;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	prot(x);
	return 0;
}
void prot(int p)
{
	int i,a[p],max=0,min=0,choice;
	printf("Enter the elements of the array\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your choice to show\n1.Max value\n2.Min value\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			max=a[0];
			for(i=0;i<p;i++)
			{
				if(a[i]>max)
				max=a[i];
			}
			printf("The maximum value is %d\n",max);
			break;
		case 2:
			min=a[0];
			for(i=0;i<p;i++)
			{
				if(a[i]<min)
				min=a[i];
			}
			printf("The minimum value is %d\n",min);
		default:
			printf("You haven't entered a valid choice\n"); 
	}		
}