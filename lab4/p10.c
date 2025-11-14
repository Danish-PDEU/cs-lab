#include <stdio.h>

int main() {
    int a[10], freq[10];
    int i, j;
    printf("Enter 10 Values:\n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for (i = 0; i < 10; i++) {
        int count = 1;
        if (freq[i] != 0) {
            for (j = i + 1; j < 10; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("\nFrequency of each number:\n");
    
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
}