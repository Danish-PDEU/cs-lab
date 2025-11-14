#include <stdio.h>

int main() {
    int isPrime = 1, sum = 0;

    for(int n=1;n<=500;n++) {

        if (n <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            sum = sum + n;
        }
        else {
            isPrime = 1;
        }
    }
    printf("Sum is = %d", sum);
}