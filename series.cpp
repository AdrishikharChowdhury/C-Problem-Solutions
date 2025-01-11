<<<<<<< HEAD
#include<stdio.h>
main()
{
	int i=1,j,n;
	float y=0.0,fact;
	printf("Enter the limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=1;
		j=1;
		while(j<=i)
		{
			fact=fact*j;
			j++;		
		}
		y=y+(i/fact);
		i++;
	}
	printf("The result is %f\n",y);
=======
#include<stdio.h>
main()
{
	int i=1,j,n;
	float y=0.0,fact;
	printf("Enter the limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=1;
		j=1;
		while(j<=i)
		{
			fact=fact*j;
			j++;		
		}
		y=y+(i/fact);
		i++;
	}
	printf("The result is %f\n",y);
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}