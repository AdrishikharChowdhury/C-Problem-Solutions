#include <stdio.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;

    if (gender == 'b') {
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }

    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);

    int total_marks = marks_summation(marks, number_of_students, gender);
    printf("%d\n", total_marks);

    return 0;
}
