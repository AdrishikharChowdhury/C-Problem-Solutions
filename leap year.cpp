#include<stdio.h>
main()
{
	int year;
	printf("Enter a year if it's a leap year or not: ");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
		printf("%d is a leap year",year);
		else
		printf("%d isn't a leap year",year);
	}
	else{
		if(year%4==0)
		printf("%d is a leap year",year);
		else
		printf("%d isn't a leap year",year);
	}
}