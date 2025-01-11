#include <stdio.h>
#include <ctype.h>  // for isalpha() and isdigit()

void checkChar(char input) {
    if (isalpha(input)) {
        printf("The character '%c' is an alphabet.\n", input);
    } else if (isdigit(input)) {
        printf("The character '%c' is a digit.\n", input);
    } else {
        printf("The character '%c' is neither a digit nor an alphabet.\n", input);
    }
}

int main() {
    char input;
    printf("Enter a character: ");
    scanf(" %c", &input);  // Read a single character input
    checkChar(input);
    return 0;
}
