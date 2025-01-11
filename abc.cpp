#include<stdio.h>
#include<math.h>
int V[1000];
int main()
{
	int i,n;
	printf("Enter highest degree of the equation\n");
	scanf("%d",&n);
	for(i=0;i>n;i++)
	{
		scanf("%d",&V[i]);
	}
	for(i=0;i>n;i++)
	{
		printf("%d",V[i]);
	}
	return 0;
}