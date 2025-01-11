#include <stdio.h>
union Number {
    int integer;
    float floating;
};
struct Calculation {
    float x;
    union Number n;
    float y;
};
main() {
    struct Calculation calc;
    printf("Enter the value of x: ");
    scanf("%f", &calc.x);
    printf("Enter the value of n (integer or float): ");
    scanf("%f", &calc.n.floating); 
    calc.y = calc.x * calc.n.floating;
    printf("Result: %.2f\n", calc.y);
}