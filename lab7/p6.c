#include <stdio.h>

int calc(int n, int a, int b) {
    switch (n) {
        case 1 : 
            printf("%d", a+b);
            break;
        case 2 : 
            printf("%d", a-b);
            break;
        case 3 : 
            printf("%d", a*b);
            break;
        case 4 : 
            printf("%d", a/b);
            break;
        default :
            printf("invalid input.");
            break;
    }
}

int main() {
    int n, a, b;
    printf("Enter any number btw 1 to 4 (1 = addition, 2 = subtraction, 3 = multiplication, 4 = division) :");
    scanf("%d", &n);
    printf("Enter two integers :");
    scanf("%d %d", &a, &b);
    calc(n, a, b);
}