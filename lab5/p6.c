#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]){
            break;
        }
        i++;
    }

    if(str1[i] == '\0' && str2 == '\0') {
        printf("both strings are same.");
    }
    else if (str1[i] > str2[i]) {
        printf("first string is greater.");
    }
    else {
        printf("Second string is greater.");
    }
}