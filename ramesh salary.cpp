//Ramesh's basic salary. Input basic salary. DA=40% of basic and HRA=20% of Basic gross slary=?
#include<stdio.h>
main()
{
	float basic,da,hra,gross;
	printf("Ramesh's basic salary is ");
	scanf("%f",&basic);
	da=basic*0.4;
	hra=basic*0.2;
	gross=basic+da+hra;
	printf("Ramesh's gross salary will be %0.2f",gross);
}