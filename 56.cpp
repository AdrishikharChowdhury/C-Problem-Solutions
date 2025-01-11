//Convert Centigrade to farenheit and vice versa
#include<stdio.h>
main()
{
	float temp,res;
	int ch;
	printf("Choose the Conversion of temperature:\n\n1. Centigrade to Farenheit            2. Farenheit to Centigrade\n\nYour Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the Centigrade temperature: ");
			scanf("%f",&temp);
			res=((9*temp)/5)+32;
			printf("The Farenheit temperature is %0.2f",res);
			break;
		case 2:
			printf("Enter the Farenheit temperature: ");
			scanf("%f",&temp);
			res=(5*(temp-32)/9);
			printf("The Centigrade temperature is %0.2f",res);
			break;
		default:
			printf("Wrong input.....!! Process terminated!!");
	}
}