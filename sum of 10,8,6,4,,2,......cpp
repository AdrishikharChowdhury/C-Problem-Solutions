<<<<<<< HEAD
#include<stdio.h>
int main()
{
	int i,j=10,n,sum=0,term[100];
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		term[i]=j;
		sum=sum+term[i];
		j=j-2;
	}
	printf("Sum of %d is %d",n,sum);
	return 0;
=======
#include<stdio.h>
int main()
{
	int i,j=10,n,sum=0,term[100];
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		term[i]=j;
		sum=sum+term[i];
		j=j-2;
	}
	printf("Sum of %d is %d",n,sum);
	return 0;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}