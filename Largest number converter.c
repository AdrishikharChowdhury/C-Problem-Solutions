#include<stdio.h>
#include<stdlib.h>
int counter(int);
int converter(int *,int);
int main()
{
    int i,j,num,n,*a,pos,max,t,ans;
    printf("Enter the number: ");
    scanf("%d",&num);
    n=counter(num);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n && num!=0;i++)
    {
        a[i]=num%10;
        num=num/10;
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i;
        }
    }
    t=a[pos];
    a[pos]=a[n-1];
    a[n-1]=t;
    ans=converter(a,n);
    printf("The largest number after one swap is %d",ans);
    return 0;
}
int counter(int a)
{
    int c=0;
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    return c;
}
int converter(int *a,int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = (10*sum) + a[i];
    }
    return sum;
}