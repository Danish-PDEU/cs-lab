#include <stdio.h>

int main() {
    char books[3][100];
    char *ptr[3];

    for(int i = 0; i < 3; i++) {
            ptr[i] = books[i];
    }

    printf("Enter 3 books names :");
    for(int i = 0; i < 3; i++) {
        scanf("%s",books[i]);
    }

    printf("You entered these books names :");
    for(int i = 0; i < 3; i++) {
        printf("%s\n",ptr[i]);
    }
}