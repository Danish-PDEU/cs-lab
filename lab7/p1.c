#include <stdio.h>

int pow(int a, int b) {
    if(b == 0) {
        return 1;
    }
    else {
        return a * pow(a,b-1);
    }
}
int main() {
    int a = 5, b = 3;
    printf("%d", pow(a,b));
}