#include<stdio.h>

int main() {
    int a, b;

    printf("enter first number :");
    scanf("%d", &a);

    printf("enter second number :");
    scanf("%d", &b);

    if(a>b) {
        printf("%d is the largest\n", a);
        printf("%d is the smallest\n", b);
    }

    else {
        printf("%d is the largest\n", b);
        printf("%d is the smallest\n", a);
    }
    return 0;
}