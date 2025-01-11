#include <stdio.h>

void lovePatternFriend1(int births) {
    int totalLoves = 0;
    for(int i = 1; i <= births; i++) {
        totalLoves += 10; // Friend 1 falls in love 10 times per birth
        printf("Friend 1 has fallen in love %d times in %d birth(s).\n", totalLoves, i);
    }
}

void lovePatternFriend2(int births, int totalAllowances) {
    int lovesPerBirth = totalAllowances / births;
    for(int i = 1; i <= births; i++) {
        printf("Friend 2 has fallen in love %d time(s) in %d birth(s).\n", lovesPerBirth, i);
    }
}

int main() {
    int births = 7;
    int totalLovesFriend1 = 70;
    int totalAllowancesFriend2 = 70;

    printf("Friend 1's love pattern:\n");
    lovePatternFriend1(births);

    printf("\nFriend 2's love pattern:\n");
    lovePatternFriend2(births, totalAllowancesFriend2);

    return 0;
}