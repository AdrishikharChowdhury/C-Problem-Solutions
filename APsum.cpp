#include<stdio.h>
int main()
{
	int i,n;
	float ft,term,cd,sum=0;
	printf("Enter the first term\n");
	scanf("%f",&ft);
	printf("Enter the common difference\n");
	scanf("%f",&cd);
	printf("Enter number of terms to add\n");
	scanf("%d",&n);
	term=ft;
	for(i=1;i<=n;i++)
	{
		sum=(sum+term);
		term=(cd+term);
	}
	printf("The sum upto %d terms is %0.2f\n",n,sum);
	return 0;
}