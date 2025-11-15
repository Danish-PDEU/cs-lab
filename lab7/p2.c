#include <stdio.h>

int isLeap(int a) {
    if(a % 4 == 0 && a % 100 != 0) {
        printf("the year you entered is a leap year.");
    }
    else {
         printf("the year you entered is not a leap year.");
    }
}

int main() {
    int year;
    printf("Enter a year");
    scanf("%d", &year);
    isLeap(year);
}