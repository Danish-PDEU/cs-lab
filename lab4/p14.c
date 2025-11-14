#include <stdio.h>

int main() {
    int arr[100], n, num, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to insert at last position: ");
    scanf("%d", &num);

    arr[n] = num;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}