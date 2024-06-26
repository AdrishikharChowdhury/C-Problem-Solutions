#include <stdio.h>
#include<math.h>
main() 
{
    int a[100],binary,decimal,ch,r,i,c=0,j=1,k;
    printf("Welcome to Binary-Decimal Converter:\n");
    do
    {
    	i=0;
    	printf("\nWhich type of conversion you want?\n1.Binary to Decimal\n2.Decimal to binary\n3.Exit\nYour choice: ");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			decimal=0;
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
				break;
			case 2:
				printf("Enter your decimal no: ");
				scanf("%d",&decimal);
				while(decimal!=0)
				{
					r=decimal%2;
					a[i++]=r;
					decimal=decimal/2;
				}
				printf("Your binary number is ");
				for(k=i-1;k>=0;k--)
				{
					printf("%d",a[k]);
				}
				printf("\n");
				break;
			case 3:
				j=0;
				break;
			default:
				printf("Wrong input!!!!\n");
		}
		printf("Do you want to continue?\n1.Yes\n2.No\nYour choice: ");
		scanf("%d",&j);
		if(j==2)
		j=0;
	}while(j);
	printf("Thank you for using our program");
}
