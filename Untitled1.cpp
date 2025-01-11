#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
float interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10;
 printf("sin( %lf )=%lf\t", interval, abs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}