#include<stdio.h>

int main() {
    int grossSal;
    printf("Enter gross salary : ");
    scanf("%d", &grossSal);
    printf("net salary is %f", 1.07*grossSal);
}