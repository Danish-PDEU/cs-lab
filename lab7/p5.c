#include <stdio.h>

int minmax(int arr[], int n, int *min, int *max) {
    *max = arr[0];
    *min = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[100], n, min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    minmax(arr, n, &min, &max);

    printf("minimum value = %d\n", min);
    printf("maximum value = %d\n", max);
}