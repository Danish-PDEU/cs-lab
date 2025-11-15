#include <stdio.h>

int main() {
    int a[3][3],b[3][3],sum[3][3],sub[3][3],mult[3][3];

    printf("Enter first matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter second matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Addition of matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction of matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sub[i][j] = a[i][j] - b[i][j];
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mult[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                mult[i][j] += a[i][j] * b[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
}