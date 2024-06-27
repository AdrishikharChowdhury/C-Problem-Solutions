#include<stdio.h>
main()
{
	int a,b,c,largest,smallest;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	largest=a;
	else{
		if(b>c)
		largest=b;
		else
		largest=c;
	}
	if(a<b && a<c)
	smallest=a;
	else{
		if(b<c)
		smallest=b;
		else
		smallest=c;
	}
	printf("%d is largest and %d is smallest number",largest,smallest);
}