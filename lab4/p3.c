#include <stdio.h>

int main() {
    int arr[5];
    int temp;
    printf("Enter 5 values :");

    for(int i = 0; i<5; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i<5; i++) {
        printf("%d\t");
    }
}