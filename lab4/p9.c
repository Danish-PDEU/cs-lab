#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int rev[5];

    for(int i = 0; i < 5 ; i++) {
		rev[i]=a[4-i];
    }
	
	for(int i = 0 ; i < 5 ; i++) {
	printf("%d\n",rev[i]);	
    }
}