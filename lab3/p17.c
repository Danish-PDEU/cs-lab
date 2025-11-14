#include <stdio.h>

int main() {
    int num, pos = neg = zero = 0;

    for (int i = 0; i < 200; i++) {
        scanf("%d", &num);
        if (num > 0){
            pos++;
        }
        else if (num < 0){
            neg++;
        }
        else{
            zero++;
        }
    }

    printf("Count of positive numbers: %d\n", pos);
    printf("Count of negative numbers: %d\n", neg);
    printf("Count of Zeroes: %d\n", zero);
}