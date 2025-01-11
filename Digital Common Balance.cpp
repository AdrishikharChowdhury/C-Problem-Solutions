#include<stdio.h>
#include<math.h>
int main()
{
	int a,x,y,z,p,q,r,s;
	printf("Enter the weight in grams on the digital common balance\n");
	scanf("%d",&a);
	x=a/100;
	a=fmod(a,100);
	if(a<100)
	{
		if(a>50)
		{
			y=a/50;
			a=fmod(a,50);
		}
		if(a<50)
		{
			if(a>20)
			{
				z=a/20;
				a=fmod(a,20);
			}
			if(a>10)
			{
				p=a/10;
				a=fmod(a,10);
			}
		if(a<10)
		{
			if(a>5)
			{
				q=a/5;
				a=fmod(a,5);
			}
			if(a<5)
			{
				r=a/2;
				a=fmod(a,2);
				s=a;			
			}	
		}				
		}
	}
	printf("No. of 100g weigths		%d\n",x);
	printf("No. of 50g weigths		%d\n",y);
	printf("No. of 20g weigths		%d\n",z);
	printf("No. of 10g weigths		%d\n",p);
	printf("No. of 5g weigths		%d\n",q);
	printf("No. of 2g weigths		%d\n",r);
	printf("No. of 1g weigths		%d\n",s);
	return 0;
}