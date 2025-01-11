#include<stdio.h>
#include<math.h>
main()
{
	int i,k,j,m;
	float y=0.0,fact;
	printf("Enter the n term: ");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		y=y+(pow(i,i)/fact);
	}
	printf("the answer of the series %f",y);
}