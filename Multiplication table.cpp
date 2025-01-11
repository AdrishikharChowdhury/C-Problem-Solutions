#include<stdio.h>
int main()
{
	int i=1,m,l,ans;
	printf("Enter the number to find it's multiplication table\n");
	scanf("%d",&m);
	printf("Enter the ending limit of the table\n");
	scanf("%d",&l);
	printf("%d table......\n",m);
	for(i=1;i<=l;i++)
	{
		ans=m*i;
		printf("%d * %d = %d\n",m,i,ans);
	}
	return 0;
}