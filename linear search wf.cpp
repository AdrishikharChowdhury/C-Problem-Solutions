#include<stdio.h>
main()
{
	int a[6],i,k,c=0;
	printf("Enter your elements into the array\n");
	for(i=0;i<6;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Enter your element to find\n");
	scanf("%d",&k);
	for(i=0;i<6;i++)
		{
			if(k==a[i])
			{
				printf("The value is at position %d\n",i+1);
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