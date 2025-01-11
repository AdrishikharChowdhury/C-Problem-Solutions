<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,c=0,r,i,check;
	printf("Enter the number to find if it's prime or composite\n");
	scanf("%d",&num);
	if(num==1)
	printf("%d is neither a prime nor a composite number",num);
	for(i=0;i<=num;i++)
	{
		r=fmod(num,i);
		if(r==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is a prime number\n",num);
	}
	if(c>2)
	{
		printf("%d is a composite number\n",num);
	}
	return 0;
=======
#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,c=0,r,i,check;
	printf("Enter the number to find if it's prime or composite\n");
	scanf("%d",&num);
	if(num==1)
	printf("%d is neither a prime nor a composite number",num);
	for(i=0;i<=num;i++)
	{
		r=fmod(num,i);
		if(r==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is a prime number\n",num);
	}
	if(c>2)
	{
		printf("%d is a composite number\n",num);
	}
	return 0;
>>>>>>> b63a747d883a64ffe7fefa823e5bd3caad143fb4
}