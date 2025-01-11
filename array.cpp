#include <stdio.h>

int main() {
    // Open input file
    FILE* inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Read number of values from the file
    int numValues;
    fscanf(inputFile, "%d", &numValues);

    // Create array to store values
    int data[numValues];

    // Read values from the file into the array
    for (int i = 0; i < numValues; i++) {
        fscanf(inputFile, "%d", &data[i]);
    }

    // Close input file
    fclose(inputFile);

    // Compute average
    double average = 0.0;
    for (int i = 0; i < numValues; i++) {
        average += data[i];
    }
    average /= numValues;

    // Find maximum value
    int max = data[0];
    for (int i = 1; i < numValues; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Print results to the screen
    printf("Number of values: %d\n", numValues);
    printf("Data values:");
    for (int i = 0; i < numValues; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
    printf("Average: %.2f\n", average);
    printf("Maximum value: %d\n", max);

    // Open output file
    FILE* outputFile = fopen("answer-hw3.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // Print results to the output file
    fprintf(outputFile, "Number of values: %d\n", numValues);
    fprintf(outputFile, "Data values:");
    for (int i = 0; i < numValues; i++) {
        fprintf(outputFile, " %d", data[i]);
    }
    fprintf(outputFile, "\n");
    fprintf(outputFile, "Average: %.2f\n", average);
    fprintf(outputFile, "Maximum value: %d\n", max);

    // Close output file
    fclose(outputFile);

    return 0;
}
