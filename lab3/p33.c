#include <stdio.h>
#include <math.h>

int main() {
    int num, sq, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    // Counting digits of the number
    while (temp > 0) {
        digits++;
        temp = temp/10;
    }

    int divisor = pow(10, digits);

    if (sq % divisor == num){
        printf("%d is an Automorphic number\n", num);
    }
    else{
        printf("%d is NOT an Automorphic number\n", num);
    }
}