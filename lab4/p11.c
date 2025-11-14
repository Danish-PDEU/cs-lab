#include <stdio.h>
#include <string.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int shifted[10],n;
    char direction[6];
    printf("Enter number of pos to shift: ", SIZE);   
    scanf("%d", &n);
    printf("Enter direction: ");
    scanf("%s", direction);

    for (int i = 0; i < 10; i++) {
        shifted[i] = 0;
    }
    
    if (strcmp(direction, "left") == 0) {
        for (int i = 0; i < 10 - n; i++) {
            shifted[i] = arr[i + n];
        }
    } 
    
    else if (strcmp(direction, "right") == 0) {
        for (int i = 10 - 1; i >= n; i--) {
            shifted[i] = arr[i - n];
        }
    }
    else {
        printf("Invalid direction!");
    }
    
    printf("Shifted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", shifted[i]);
    }
}
