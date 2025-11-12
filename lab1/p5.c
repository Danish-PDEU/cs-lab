#include<stdio.h>

int main() {
    int a, b;
    printf("enter a : "); 
    scanf("%d", &a);

    printf("enter b : ");
    scanf("%d", &b);

    printf("sum is %d", a + b);
    printf("difference is %d", a - b);
    printf("Multiplication is %d", a * b);
    printf("division is %d", a / b);
    return 0;
}