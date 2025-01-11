#include <stdio.h>
#include <math.h>
// Function to calculate f(x) = 1/(1 + x^2)
double func(double x) {
    return 1 / (1 + x * x);
}
// Simpson's 1/3 Rule
double simpson13(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);
    for (int i = 1; i < n; i += 2) {
        double x = a + i * h;
        sum += 4 * func(x);
    }
    for (int i = 2; i < n; i += 2) {
        double x = a + i * h;
        sum += 2 * func(x);
    }
    return (h / 3) * sum;
}
main() {
    double a = 0, b = 4; // Integration limits
    int n = 1000; // Number of intervals  
    // Simpson's 1/3 Rule
    double simpson13_result = simpson13(a, b, n);
    printf("Simpson's 1/3 Rule: %lf\n", simpson13_result);

}
