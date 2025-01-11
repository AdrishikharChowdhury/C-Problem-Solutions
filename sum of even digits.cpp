<<<<<<< HEAD
#include<stdio.h>
main()
{
	int ld,r,n,sum=0;
	printf("Enter the no.: ");
	scanf("%d",&n);
	while(n!=0)
	{
		ld=n%10;
		if(ld%2==0)
		sum=sum+ld;
		n=n/10;
	}
	printf("%d is the sum",sum);
=======
#include<stdio.h>
main()
{
	int ld,r,n,sum=0;
	printf("Enter the no.: ");
	scanf("%d",&n);
	while(n!=0)
	{
		ld=n%10;
		if(ld%2==0)
		sum=sum+ld;
		n=n/10;
	}
	printf("%d is the sum",sum);
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}