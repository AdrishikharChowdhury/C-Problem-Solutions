#include<stdio.h>
main() 
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b && a > c) ? a : ((b > c) ? b : c);
    int smallest = (a < b && a < c) ? a : ((b < c) ? b : c);

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
}