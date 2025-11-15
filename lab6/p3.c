#include <stdio.h>

int main() {
    int a[3][3];
    int *ptr;

    printf("Enter 3 x 3 matrix :\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    ptr = &a[0][0];

    int largest = *ptr;
    int smallest = *ptr;

    for(int i = 0; i < 9; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if(*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Largest = %d\n",largest);
    printf("smallest = %d",smallest);
}