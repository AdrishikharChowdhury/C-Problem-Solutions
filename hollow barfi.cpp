#include <stdio.h>
#include <stdlib.h>

void printHollowDiamond(int n) {
    int i, j, space = n / 2;

    // Upper part of the diamond
    for (i = 1; i <= n; i += 2) {
        // Print spaces
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        // Print stars or spaces for hollow part
        if (i == 1) {
            printf("*\n");
        } else {
            printf("*");
            for (j = 0; j < i - 2; j++) {
                printf(" ");
            }
            printf("*\n");
        }

        space--;
    }

    space = 1;

    // Lower part of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        // Print spaces
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        // Print stars or spaces for hollow part
        if (i == 1) {
            printf("*\n");
        } else {
            printf("*");
            for (j = 0; j < i - 2; j++) {
                printf(" ");
            }
            printf("*\n");
        }

        space++;
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    if (n <= 0) {
        printf("Invalid size entered. Please enter a positive integer.\n");
        return 1;
    }

    // Adjust size to nearest odd number
    if (n % 2 == 0) {
        n++;
    }

    printHollowDiamond(n);

    return 0;
}
