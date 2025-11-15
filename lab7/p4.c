#include <stdio.h>

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d",a,b);
}

int main() {
    int x, y;
    printf("Enter two values :");
    swap(x,y);
    printf("Original values x = %d & y = %d",x,y);
}