//Insertion with function
#include<stdio.h>
int getvalue(int);
int showarray(int);
int insertvalue(int);
int again(int);
int a[100];
int main()
{
	int n,i,temp;
	printf("Enter your array limit\n");
	scanf("%d",&n);
	if(n<100)
	{
		getvalue(n);
		printf("Arry before insertion......\n");	
		showarray(n);
		insertvalue(n);                   
		n=n+1;
		printf("Arry after insertion......\n");	
		showarray(n);
		again(n);
	}
	else
	{
		printf("Sorry!! array exceeds limit\n");
		printf("Do you want to try again?\n1.Yes\n2.No\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			main();
		}
	}
	return 0;		
}
int again(int n)
{
	int h;
	printf("Do you want to insert another element\n1.Yes\n2.No\n");
	scanf("%d",&h);
	if(h==1)
		{
			insertvalue(n);   
			n=n+1;                
			printf("Arry after insertion......\n");	
			showarray(n);
			again(n);	
		}
	else
		printf("Process terminated...");			
	return 0;
}
int getvalue(int n)
{
	int i;
	printf("Enter your %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int showarray(int n)
{
	int i;
	//printf("All elements\n");
		for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
int insertvalue(int n)
{
	int k,i,num;
	printf("Enter the  position you want to insert\n");
	scanf("%d",&k);
	printf("Enter the number you want to insert\n");
	scanf("%d",&num);	
	for(i=n-1;i>=k-1;i--)
	{
		a[i+1]=a[i];
		a[i]=0;
	}
	a[k-1]=num;	
	return 0;
}