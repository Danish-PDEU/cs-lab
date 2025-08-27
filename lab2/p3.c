#include<stdio.h>

int main() {
    int grossSal;
    printf("Enter gross salary : ");
    scanf("%d", &grossSal);

    if(grossSal > 5000) {
        if(grossSal>10000) {
            printf("net salary is %f", 1.07*grossSal);
        }

        else {
            printf("net salary is %f", 1.05*grossSal);
        }
    }

    else {
        printf("net salary is %d", grossSal);
    }
    return 0;
}