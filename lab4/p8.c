#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int cpy[10] = {0};

    int j = 0;
    for (int i = 0; i < 5; i++) {
        cpy[j] = a[i];
        j = j + 2; 
    }

    
    printf("Copied array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", cpy[i]);
    }
}