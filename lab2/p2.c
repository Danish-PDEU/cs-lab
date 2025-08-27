#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    printf("Enter the third number :");
    scanf("%d", &c);

    if(a>b && a>c) {
        printf("%d is the largest\n", a);
    }

    else if(b>a && b>c) {
        printf("%d is the largest\n", b);
    }

    else {
        printf("%d is the largest\n", c);
    }

    if(a<b && a<c) {
        printf("%d is the smallest\n", a);
    }

     else if(b<a && b<c) {
        printf("%d is the smallest\n", b);
    }

    else {
        printf("%d is the smallest\n", c);
    }
}