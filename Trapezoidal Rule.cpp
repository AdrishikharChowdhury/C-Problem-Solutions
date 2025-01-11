#include <stdio.h>
#include <math.h>

// Function to calculate f(x) = 1/(1 + x^2)
double func(double x) {
    return 1 / (1 + x * x);
}

// Trapezoidal Rule
double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (func(a) + func(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += func(x);
    }
    return h * sum;
}

main() {
    double a = 0, b = 4; // Integration limits
    int n = 1000; // Number of intervals
    
    // Trapezoidal Rule
    double trapezoidal_result = trapezoidal(a, b, n);
    printf("Trapezoidal Rule: %lf\n", trapezoidal_result);
}
