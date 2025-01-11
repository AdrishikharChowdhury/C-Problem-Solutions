#include<stdio.h>
main()
{
	float bs,da,hra,gross;
	printf("Enter Ramesh's Basic Salary: ");
	scanf("%f",&bs);
	da=bs*0.4;
	hra=bs*0.2;
	gross=bs+da+hra;
	printf("Ramesh's gross salary is %0.2f",gross);
}