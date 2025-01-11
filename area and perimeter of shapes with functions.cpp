#include<stdio.h>
#include<math.h>
float areasqr(float);
float perisqr(float);
float areatri(float,float,float);
float peritri(float,float,float);
float circumcir(float);
float areacir(float);
float arearec(float,float);
float perirec(float,float);
int menu();
int main()
{	
	int check2;
	menu();
	printf("Do you want to continue\n 1. Yes\n 2. No\n");
	scanf("%d",&check2);
	if(check2==1)
	{
		main();
	}
	return 0;
}
int menu()
{
	int choice=0,l=0,b=0,a=0,r=0,check1=0,pr=0,cc=0,ac=0,ar=0,as=0,ps=0,pt=0,at=0;
	printf("Enter Your Shape\n 1. Rectangle\n 2. Square\n 3. Circle\n 4. Triangle\n 5. Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the length of the rectangle\n");
			scanf("%d",&l);
			printf("Enter the breadth of the rectangle\n");
			scanf("%d",&b);
			printf("Enter Your Choice To Show\n 1. Perimeter\n 2. Area\n 3. Retry\n");
			scanf("%d",&check1);
			switch(check1)
			{
				case 1:
				pr=perirec(l,b);
				printf("The perimeter of the rectangle is %d\n",pr);
				break;
				case 2:
				ar=arearec(l,b);
				printf("The area of the rectangle is %d\n",ar);
				break;
				case 3:
				menu();
				default:
					printf("Wrong choice try again\n");
					menu();
			}
			break;
		case 2:
			printf("Enter the side of the square\n");
			scanf("%d",&a);
			printf("Enter Your Choice To Show\n 1. Perimeter\n 2. Area\n 3. Retry\n");
			scanf("%d",&check1);
			switch(check1)
			{
				case 1:
					ps=perisqr(a);
					printf("The perimeter of square is %d\n",ps);
				break;
				case 2:
					as=areasqr(a);
					printf("The area of square is %d\n",as);
				break;
				case 3:
					menu();
				default:
					printf("Wrong choice try again\n");
					menu();	
			}
			break;
		case 3:
			printf("Enter the radius of the circle\n");
			scanf("%d",&r);
			printf("Enter Your Choice To Show\n 1. Perimeter\n 2. Area\n 3. Retry\n");
			scanf("%d",&check1);
			switch(check1)
			{
				case 1:
					cc=circumcir(r);
					printf("The circumference of the circle is %d\n",cc);
				break;
				case 2:
					ac=areacir(r);
					printf("The area of the circle is %d\n",ac);
				break;
				case 3:
					menu();
				default:
					printf("Wrong choice try again\n");
					menu();					
			}
			break;
		case 4:
			printf("Enter the 1st side of the triangle\n");
			scanf("%d",&l);
			printf("Enter the 2nd side of the triangle\n");
			scanf("%d",&b);
			printf("Enter the 3rd side of the triangle\n");
			scanf("%d",&a);
			printf("Enter Your Choice To Show\n 1. Perimeter\n 2. Area\n 3. Retry\n");
			scanf("%d",&check1);
			switch(check1)
			{
				case 1:
					pt=peritri(l,b,a);
					printf("The perimeter of the triangle is %d\n",pt);
				break;
				case 2:
					at=areatri(l,b,a);
					printf("The area of the triangle is %d\n",at);
				break;
				case 3:
					menu();
				default:
					printf("Wrong choice try again\n");
					menu();
			}
				break;
		case 5:
			break;
			default:
				printf("You haven't entered a valid choice\n");											
	}
	return 0;
}
float areasqr(float a)
{
	float as,A;
	A=pow(a,2);
	as=A;
	return (as);
}
float perisqr(float a)
{
	float ps;
	ps=4*a;
	return (ps);
}
float areatri(float a,float b,float l)
{
	float at,s,S;
	s=(l+b+a)/2;
	S=(s-l)*(s-b)*(s-a);
	at=sqrt(S);
	return (at);
}
float peritri(float l,float b,float a)
{
	float pt;
	pt=(l+b+a);
	return (pt);
}
float circumcir(float r)
{
	float cc;
	cc=2*3.14*r;	
	return (cc);
}
float areacir(float r)
{
	float ac,R;
	R=pow(r,2);
	ac=3.14*R;	
	return (ac);
}
float arearec(float l,float b)
{
	float ar;
	ar=(l*b);
	return (ar);
}
float perirec(float l,float b)
{
	float pr;
	pr=2*(l+b);
	return (pr);
}