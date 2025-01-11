#include<stdio.h>
int main()
{
	int m,i,a[m];
	printf("Enter the size of the array\n");
	scanf("%d",&m);
	printf("Enter %d elements\n",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}