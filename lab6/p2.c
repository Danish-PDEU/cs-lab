#include <stdio.h>

int main() {
    int a[4][4];
    int arr[16], temp, k = 0;

    printf("Enter 4 x 4 matrix :\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            arr[k++] = a[i][j];
        }
    }

    for(int i = 0; i<16; i++) {
        for(int j=i+1; j<16; j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i<16; i++) {
        printf("%d\t",arr[i]);
    }
}