#include <stdio.h>

int main() {
    int arr[100], n, value, i, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Value not found in the array.\n");
    }

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deleting the value:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}