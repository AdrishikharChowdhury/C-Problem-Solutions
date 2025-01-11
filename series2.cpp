#include<stdio.h>
#include<math.h>
main()
{
	int i,j,k,n;
	float y=0.0,fact;
	printf("Enter the no. of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		y=y+(pow(i,i)/fact);
	}
	printf("The answer of the series is %f\n",y);
}