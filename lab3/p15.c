#include<stdio.h>

int main() {
    int mean,num,n,sum=0;
    printf("Enter n :");
    scanf("%d", &n);

    for(int i = 1;i<=n;i++) {
        printf("Enter %dth Number :",i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum = %d", sum);
}