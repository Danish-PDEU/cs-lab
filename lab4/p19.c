#include <stdio.h>

int main() {
    int arr[100], n, value, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Value %d found at position %d.\n", value, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Value %d not found in the array.\n", value);
    }
}
