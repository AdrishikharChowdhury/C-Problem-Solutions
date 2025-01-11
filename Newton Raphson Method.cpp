#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6

double f(double x) {
    return x * x * x - 8 * x - 4;
}

double f_prime(double x) {
    return 3 * x * x - 8;
}

double newtonRaphson(double x0, int decimal_places) {
    int iterations = 0;
    double x = x0;

    while (fabs(f(x)) >= EPSILON && iterations < 1000) {
        double delta_x = f(x) / f_prime(x);
        x -= delta_x;

        iterations++;
    }

    // Round the result to the specified number of decimal places
    double factor = pow(10, decimal_places);
    x = round(x * factor) / factor;

    return x;
}

main() {
    double x0;
    printf("Enter the initial guess (x0):\n");
    scanf("%lf", &x0);
    int decimal_places;
    printf("Enter the number of decimal places for accuracy:\n");
    scanf("%d", &decimal_places);
    double root = newtonRaphson(x0, decimal_places);
    printf("Root (Newton-Raphson Method): %.*lf\n", decimal_places, root);
}
