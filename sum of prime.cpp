#include<stdio.h>
int main()
{
	int i,j,sum=0,p=0,r,N;
	printf("Enter the first limit: ");
	scanf("%d",&j);
	printf("Enter the last limit: ");
	scanf("%d",&N);
	printf("The prime numbers between %d and %d\n",j,N);
	while(j!=N+1)
	{
		i=1;
		while(i<=j-1)
		{
			
			if(j%i==0)
				p=p+1;		
			i=i+1;
		}
		if(p==1)
		{
			printf("%d\n",j);
			sum=sum+j;
		}
		j++;
		p=0;	
	}	
	printf("\nThe sum of prime numbers are %d",sum);
	return 0;
}