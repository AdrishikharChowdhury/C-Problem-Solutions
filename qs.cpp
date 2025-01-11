#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		if((char)a[i]=='5')
		printf("%d",a[i]);
		else
		printf("FAIL\n");
	}
}