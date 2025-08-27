#include<stdio.h>

int main() {
    int grossSales;

    printf("Enter gross sales :");
    scanf("%d", &grossSales);

    if(grossSales>20000) {
        printf("net sales is %f", grossSales - 0.15*grossSales);
    }

    else if(grossSales>10000) {
        printf("net sales is %f", grossSales - 0.1*grossSales);
    }

    else {
        printf("net sales is %f", grossSales - 0.05*grossSales);
    }
}