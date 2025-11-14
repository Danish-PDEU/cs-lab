#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter array elements :");

    for(int i = 0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The 4th, 7th and 9th values are %d %d and %d respectively.",arr[3],arr[6],arr[8]);
}