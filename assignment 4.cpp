#include<stdio.h>
#include<math.h>
main()
{
    int i,j,ch,n;
    float fact,y=0.0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Calculate:\n1. 1/2!+2/3!+3/4!+4/5!+........+n/(n+1)!\n2. 1/2!+1/4!+1/8!+........+1/2^n!\nYour choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		for(i=1;i<=n;i++)
    		{
    			fact=1;
    			for(j=1;j<=i+1;j++)
    			{
    				fact=fact*j;
				}
				y=y+(i/fact);
			}
			break;
		case 2:
			for(i=1;i<=n;i++)
			{
				fact=1;
				for(j=1;j<=pow(2,i);j++)
				{
					fact=fact*j;
				}
				y=y+(1/fact);
			}
			break;
		default:
			printf("Wrong Input!!......Process Terminated");
	}
	printf("The sum of the series is %0.2f",y);
}