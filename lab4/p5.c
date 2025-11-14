#include <stdio.h>

int main() {
    int a[3][3] = {{2,5,9},{4,3,9},{7,8,9}};
    int b[3][3] = {{4,6,8},{1,3,5},{4,6,5}};
    int sum[3][3];

    for(int i = 0; i<3 ; i++) {
        for(int j = 0; j<3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i<3 ; i++) {
        for(int j = 0; j<3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}