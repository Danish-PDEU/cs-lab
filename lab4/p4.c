#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    int count[9] = {0};

    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    printf("Minimum number of notes required are:\n");
    
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0) {
            printf("%d note(s) of %d\n", count[i], notes[i]);
        }
    }
    return 0;
}