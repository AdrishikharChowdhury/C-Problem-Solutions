#include<stdio.h>
#include<math.h>
main()
{
	int i,m,r;
	printf("Enter the no. of rows: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		r=pow(11,i);
		printf("%d\n",r);
	}
}