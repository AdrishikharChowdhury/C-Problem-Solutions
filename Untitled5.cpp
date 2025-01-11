#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6

double f(double x) {
    return x * x * x - 8 * x - 4;
}

void bisection(double a, double b, double tolerance) {
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval\n");
        return;
    }

    double c;
    int iterations = 0;
    while ((b - a) >= tolerance && iterations < 1000) {
        c = (a + b) / 2;
        if (fabs(f(c)) < tolerance) {
            return;
        }
        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
        iterations++;
    }

    printf("Root (Bisection Method): %.6lf\n", c);
}

int main() {
    double a, b;
    printf("Enter the intervals:\n");
    scanf("%lf %lf", &a, &b);
    bisection(a, b, EPSILON);
    return 0;
}
