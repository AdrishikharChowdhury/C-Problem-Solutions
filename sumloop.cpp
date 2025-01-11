#include<stdio.h>
#include<math.h>
int main()
{
  int num=0,r,n,s=0,check;
  printf("Enter your number to find the sum of their digits\n");
  scanf("%d",&num);
  n=num;
  while(n<0||n>0)
  {
    r=fmod(n,10);
    s=s+r;
    n=n/10;
  }
	printf("%d's sum of the digits are %d\n",num,s);
	return 0;
}