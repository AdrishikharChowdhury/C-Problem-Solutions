#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,n,a,c=1;
	printf("Enter highest degree of the equation\n");
	scanf("%d",&n);
	int v[n];
	for(i=0;i>=n;i++)
	{
		scanf("%d",&v[i]);
	}
	for(i=0;i>=n;i++)
	{
		printf("%d",v[i]);
	}
	printf("%d",c);
	return 0;
}