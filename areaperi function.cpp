#include <stdio.h>
void areaperi(float,float *,float *);
main() 
{
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    areaperi(radius, &area, &perimeter);
    printf("The area of the circle is: %.2f\n", area);
    printf("The perimeter of the circle is: %.2f\n", perimeter);
}
void areaperi(float radius,float *area,float *perimeter)
{
    float PI = 3.1415;
    *area = PI * radius * radius;
    *perimeter = 2 * PI * radius;
}