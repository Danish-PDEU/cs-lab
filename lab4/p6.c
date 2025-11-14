#include<stdio.h>

int main() {
    int a[3][3] = {{2,5,9},{4,3,9},{7,8,9}};
    int b[3][3] = {{4,6,8},{1,3,5},{4,6,5}};
    int mult[][];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < c1; k++) {
                mult[i][j] = mult[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
}