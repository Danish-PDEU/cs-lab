#include<stdio.h>

int main() {
    int a;

    printf("Enter the number");
    scanf("%d", &a);

    if(a%7 == 0) {
        printf("The number is divisible by 7");
    }

    else {
        printf("The number is not divisible by 7");
    }
}