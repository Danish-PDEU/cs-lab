#include<stdio.h>

int main() {
    int l,b;
    printf("Enter length and width :");
    scanf("%d %d", &l,&b);
    printf("Area = %d and perimeter = %d", l*b,2*(l+b));
}