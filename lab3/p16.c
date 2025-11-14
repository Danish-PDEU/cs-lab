#include <stdio.h>

int main() {
    int n, largest = smallest = 0;
    
    for (int i = 1; i < 100; i++) {
        scanf("%d", &n);

        if (n > largest) {
            largest = n;
        }
        if (n < smallest){
            smallest = n;
        }
    }

    printf("Largest nber: %d\n", largest);
    printf("Smallest nber: %d\n", smallest);
}