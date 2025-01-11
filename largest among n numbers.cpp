<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int *p;
	int x,i,l;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	p=(int *)malloc(x*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&p[i]);
	}
	l=p[0];
	for(i=0;i<x;i++)
	{
		if(l<p[i])
		l=p[i];
	}
	printf("The largest number from the array is %d",l);
=======
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int *p;
	int x,i,l;
	printf("Enter the size of the array\n");
	scanf("%d",&x);
	p=(int *)malloc(x*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&p[i]);
	}
	l=p[0];
	for(i=0;i<x;i++)
	{
		if(l<p[i])
		l=p[i];
	}
	printf("The largest number from the array is %d",l);
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}