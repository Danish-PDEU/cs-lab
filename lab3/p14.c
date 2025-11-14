#include<stdio.h>

int main() {
    int mean,num,sum=0;

    for(int i = 1;i<=10;i++) {
        printf("Enter %dth Number :",i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum = %d", sum);
}