#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
    char a[]="1101",b[] = "01";   
    float d1=0.0,num;
    int d2=0,i,l1,l2;
    l1=strlen(a);
    for (i=0;i<l1;i++)
	{
        if (a[i]=='1') {
            d2=d2+pow(2, l1 - 1 - i);
        }
    }
    l2=strlen(b);
    for (i=0;i< l2;i++)
	{
        if (b[i] == '1') {
            d1=d1+pow(2,-(i+1));
        }
    }
    num=d1+d2;
        printf("The decimal representation of binary 1101.01 is: %f\n",num);
}
