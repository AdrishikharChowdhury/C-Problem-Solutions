#include<stdio.h>
#include<math.h>
main()
{
	int binary,r,i,decimal=0;
    printf("Enter your binary no: ");
    scanf("%d",&binary);
    while(binary!=0)
    {
    	r=binary%10;
    	decimal=decimal+(r*pow(2,i));
   		binary=binary/10;
   		i++;
	}
	printf("Your decimal number is %d\n",decimal);
}