#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int decimalNum) {
    int remainder, binaryNum[32], i = 0;

    // Handle negative decimal numbers
    if (decimalNum < 0) {
        printf("-");
        decimalNum = -decimalNum;
    }

    // Convert decimal to binary
    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum[i++] = remainder;
        decimalNum /= 2;
    }

    // Print the binary representation
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNum[j]);
        }
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary representation: ");
    decimalToBinary(decimalNumber);
    printf("\n");

    return 0;
}