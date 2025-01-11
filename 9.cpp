#include <stdio.h>

double calculateSum(int n, int decimal_places, double sum) {
    double term;
    int precision = 1;
    for (int i = 0; i < decimal_places; i++) {
        precision *= 10;
    }
    if (n == 0) {
        return sum;
    }
    term = ((double)n * 2) / (n * 2 + 1);
    sum = (int)(sum * precision + 0.5) / (double)precision;
    return calculateSum(n - 2, decimal_places, sum + term);
}

int main() {
    int n, decimal_places;
    double sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the number of decimal places: ");
    scanf("%d", &decimal_places);
    if (n % 2 != 0) {
        printf("Error: n must be an even number.\n");
        return 1;
    }
    sum = calculateSum(n, decimal_places, 0.0);
    printf("The sum of the series up to %d decimal places is: %.%df\n", decimal_places, decimal_places, sum);
    return 0;
}