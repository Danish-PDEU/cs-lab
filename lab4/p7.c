#include <stdio.h>

int main() {
    int a[4][4], trans[4][4];
    printf("Enter elements of 4x4 matrix:\n");
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            trans[j][i] = a[i][j];
        }
    }

    
    printf("Transposed matrix :\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}