#include <stdio.h>

int main() {
    int j=5;
    for(int i=1; i<6; i++) {
        while(j>0) {
            printf("%d %d\n",i,j);
            j--;
            break;
        }
    }
}