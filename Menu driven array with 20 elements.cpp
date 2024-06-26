#include<stdio.h>
#include<math.h>
int main()
{
	int a[20],x,r,R,X,i,choice;
	printf("Enter 20 elements of an array\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter your choice to show:\n 1. All elements\n 2. Elements Of A Specific Position\n 3. Even Elements\n 4. Odd Positioned Elements\n 5. Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("All Elements\n");
			for(i=0;i<20;i++)
			{
				printf("%d\n",a[i]);
			}
			break;
		case 2:
			printf("Enter the specific position\n");
			scanf("%d",&x);
			X=x-1;
			printf("The %dth element of the array is %d",x,a[X]);
			break;
		case 3:
			printf("Even elements\n");
			for(i=0;i<20;i++)
			{
				r=fmod(a[i],2);
				if(r==0)
					{
						printf("%d\n",a[i]);
					}
			}
			break;
		case 4:
			printf("Odd Posiioned Elements\n");
			for(i=0;i<20;i++)
			{
				R=fmod(i,2);
				if(R==0)
				{
					printf("%d\n",a[i]);
				}
			}
			break;
		case 5:	break;
		default:printf("You haven't entered a valid option\n");	
	}
	return 0;
}