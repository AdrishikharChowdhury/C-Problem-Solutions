#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6

double f(double x) {
    return x * x * x - 8 * x - 4;
}

double regulaFalsi(double a, double b, int decimal_places) {
    double c;
    int iterations = 0;

    while (fabs(b - a) >= EPSILON && iterations < 1000) {
        // Calculate the next approximation using Regula Falsi method
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (fabs(f(c)) < EPSILON) // Check if the function value is close to zero
            break;

        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;

        iterations++;
    }

    // Round the result to the specified number of decimal places
    double factor = pow(10, decimal_places);
    c = round(c * factor) / factor;

    return c;
}

main() {
    double a, b;
    printf("Enter the intervals:\n");
    scanf("%lf %lf", &a, &b);

    int decimal_places;
    printf("Enter the number of decimal places for accuracy:\n");
    scanf("%d", &decimal_places);

    double root = regulaFalsi(a, b, decimal_places);
    printf("Root (Regula Falsi Method): %.*lf\n", decimal_places, root);
}
